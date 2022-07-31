## 解题思路：

题意明确，对于一个长度为 $n$ 的排列，构造出使其权重最小的排列。

关于权重的定义如下：

$$
\sum^{n}_{i=1} {p_i | i}
$$

其中 $p_i | i$ 表示 $p_i | i$ 时 $p_i \div i$ 的值。

显然易得：

当 $i$ 的值为 $1$ 时，无论 $p_i$ 为多少都能被 $i$ 整除。

根据任意两相邻整数互质可得：

将元素错位排列以后，所得的权重最小，以下代码给出了一种解决方案。

## 代码：

``` cpp
#include<bits/stdc++.h>
using namespace std;

int T,n;

int main()
{
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        printf("%d ",n);
        for(int i=1;i<n;i++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
```