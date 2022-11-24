题意：

给出 $n$ 个字符串，判断字符串是否为 $\texttt{YesYes...Yes}$ 的子串。

思路：

这样的题目，被称为多模字符串匹配，通常会使用到AC自动机算法。

关于AC自动机，在此（极为简单的题目）不做过多的讨论，请出门左转 [P3808 【模板】AC 自动机（简单版）](https://www.luogu.com.cn/problem/P3808)。

本题数据范围极小，可以直接水过。

考虑使用 `str.find(s)` 函数。

`str.find(s)` 函数用于查找字符串 $s$ 在字符串 $str$ 中出现的位置，若字符串 $s$ 没有在字符串 $str$ 中出现，则返回 `string::npos`。

代码如下：
``` cpp
#include<bits/stdc++.h>
using namespace std;
string str,tmp;
int n;
int main()
{
    for(int i=1;i<=50;i++)
        str+="Yes";
    cin>>n;
    while(T--)
    {
        cin>>tmp;
        printf(str.find(tmp)!=string::npos?"YES\n":"NO\n");
    }
    return 0;
}
```