## 题意概要

构造一个排列，使排列上的每个数与其位于排列中位置的序号的最小公倍数的和最大。

## 解题思路

使最小公倍数的和最大，自然想到了在两数互质的情况下最小公倍数之和能达到最大。

有一条数学规律：**任意两相邻自然数必定互质**。

那么，要使最小公倍数之和最大，即可想到：相邻两数相乘乘积最大，并且从最大的数开始处理，交换最大的数与次大的数，以此类推，即可到达最小公倍数之和最大。

综上，我们很容易地得出，从左往右，每两个数均交换一次位置即可。

代码如下：

``` cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int T;
void slove()
{
    int n;
    scanf("%d",&n);
    int a[100010];
    for(int i=1;i<=n;i++)
    {
        a[i]=i;
    }
    for(int i=n;i>=2;i-=2)
    {
        swap(a[i],a[i-1]);
    }
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return ;
}
int main()
{
    scanf("%d",&T);
    while(T--)
    {
        slove();
    }
    return 0;
}
```