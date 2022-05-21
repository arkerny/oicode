普及 C++ 字符串处理技巧。

`std::stoi/std::stol/std::stoll` 函数可以将 x**x** 进制字符串转换为 10**1**0 进制整数，返回值分别为 `int`、`long` 和 `long long`。

以 `std::stoi` 为例，原型为 `int stoi(const std::string& str, std::size_t* pos = 0, int base = 10);`。
该函数舍弃所有空白符，然后取尽可能多的字符组成 \textit{base}**base** 进制的整数。合法的字符串由下列部分组成：

* （可选）正或负号
* （可选）指示八进制的前缀 `0`（仅当 \textit{base}**base** 为 8**8** 或 0**0** 时可用）
* （可选）指示十六进制的前缀 `0x` 或 `0X`（仅当 \textit{base}**base** 为 16**1**6 或 0**0** 时可用）
* 一个数字序列
  \textit{base}**base** 可选值是 \{0,2,3,\ldots,36\}**{**0**,**2**,**3**,**…**,**3**6**}。对于二进制，合法数字集是 \{0,1\}**{**0**,**1**}**，对于三进制是 \{0,1,2\}**{**0**,**1**,**2**}**，以此类推。对于 \textit{base}>10**base**>**1**0 的情况，合法数字包含字母 \texttt{A}**A** 到 \texttt{Z}**Z**，且忽略字符大小写。
  若 \textit{base}**base** 为 0**0** ，则自动检测进制：若前缀为 `0`，则为八进制；若前缀为 `0x` 或 `0X`，则为十六进制；否则为十进制。
  若 \textit{pos}**pos** 不是空指针，则成功转换的字符个数会存储在该指针对应的变量中。

如果是 `char` 数组可以使用类似的 `std::strtol/std::strtoll` 函数，可以参考 C++ Reference 的 [`std::strtol, std::strtoll`](https://zh.cppreference.com/w/cpp/string/byte/strtol) 页面。

使用 `std::stoi` 的版本：

```cpp
#include <iostream>
#include <string>
int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr), std::cout.tie(nullptr);
  int n;
  std::string s;
  std::cin >> n >> s;
  std::cout << std::stoi(s, nullptr, n) << '\n';
  return 0;
}
```

使用 `std::strtol` 的版本：

```cpp
#include <cstdio>
#include <cstdlib>
int main(int argc, char const *argv[]) {
  int n;
  char s[101];
  std::scanf("%d%s", &n, s);
  std::printf("%ld", std::strtol(s, nullptr, n));
  return 0;
}
```

下面介绍拥有极致性能的 `std::from_chars`，需要 C++17 标准。但是可以在 GCC 9.3.0 的 C++14 标准下编译通过（甚至没有警告），也就是说你可以在考场上使用。
处理整数的函数原型 `std::from_chars_result from_chars(const char* first, const char* last, /*see below*/& value, int base = 10);`，这里不允许使用 `bool`。传入一个字符数组的区间，答案 **存储在 \boldsymbol{value}**v**a**l**u**e** 中** 而不是返回值，正常运行的时候返回值可以忽略。
与前面不同之处：

* \textit{base}=16**base**=**1**6 时不识别 `0x` 或 `0X` 前缀。
* 仅识别负号（不识别正号），而且只针对 \textit{value}**value** 的有符号整数类型。

代码如下：

```cpp
#include <charconv>
#include <iostream>
int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr), std::cout.tie(nullptr);
  int base, ans = 0;
  char buf[101];
  std::cin >> base >> buf;
  std::from_chars(buf, buf + 100, ans, base);
  std::cout << ans;
  return 0;
}
```


普及 C++ 字符串处理技巧。

有一个函数叫作 `itoa`，但是它不是标准库函数，因此不作介绍。

标准库只有一个支持该功能的函数 `std::to_chars`，需要 C++17 标准。但是可以在 GCC 9.3.0 C++14 标准下编译通过，因此 **可以** 在考场上使用。
处理整数的函数原型 `std::to_chars_result to_chars(char* first, char* last, /*see below*/ value, int base = 10);`，不能使用 `bool`。功能是将 \textit{value}**value** 转化成 \textit{base}**base** 进制后写入 `char` 数组。
返回值是一个 `std::to_chars_result` 类型，是一个结构体，定义如下：

```cpp
struct to_chars_result {
  char* ptr;
  std::errc ec;
};
```

如果正常转换，\textit{ec}**ec** 将等于 `std::errc()`，\textit{ptr}**ptr** 指向最后一个写入字符的后一位。即最终范围是 [\textit{first},\textit{ptr})**[**first**,**ptr**)**。

`std::to_chars` 在处理进制 \textit{base}>10**base**>**1**0 的情况时用的是小写字母，因此还需要转换成大写字母。

代码如下，里面使用了 C++17 的语法结构化绑定和 `if` 初始化语句，但是都可以在 GCC 9.3.0 C++14 标准下编译通过，因此考场上 **可以** 使用这些语法。

```cpp
#include <algorithm>
#include <cctype>
#include <charconv>
#include <iostream>
#include <string>
#include <system_error>
int main(int argc, char const *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr), std::cout.tie(nullptr);
  int n, base;
  char buf[101];
  std::cin >> n >> base;
  std::string s;
  if (auto [p, e] = std::to_chars(buf, buf + 100, n, base); e == std::errc())
    s = std::string(buf, p);
  std::transform(s.begin(), s.end(), s.begin(),
                 [](unsigned char c) { return std::toupper(c); });
  std::cout << s;
  return 0;
}
```
