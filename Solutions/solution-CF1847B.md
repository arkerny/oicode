## 题目大意

将一个数组分为若干段，使得各段的按位与运算结果之和最小，且使段的数量最大。

## 题目分析

本题主要考察位运算的性质。

首先，根据按位与运算的性质可得最小值必为 $a_1 \operatorname{and} a_2 \operatorname{and} \dots \operatorname{and} a_n$:

取数 $a,b$ 的二进制表示，手模一下按位与运算易得 $a,b \ge a \operatorname{and} b$。

同时，$a+b \ge a \operatorname{and} b$，当且仅当 $a=b=0$ 时取等，因此 $a_1 \operatorname{and} a_2 \operatorname{and} \dots \operatorname{and} a_n > 0$ 时，答案为 $1$。

$a_1 \operatorname{and} a_2 \operatorname{and} \dots \operatorname{and} a_n = 0$ 时，从头到尾找按位与为 $0$ 的子段的最大数量即为答案。但是这里需要注意，在已经取了 $k$ 段后，第 $k+1$ 段的按位与值可能始终取不到 $0$，在这种情况下，则应当将第 $k+1$ 段与第 $k$ 段再做一次按位与运算使最后一段的按位与值取到 $0$。

## 代码

``` cpp
#include<bits/stdc++.h>
using namespace std;

int n,ans,a[2000010],minn;

void init()
{
    ans=0;
    return ;
}

void solve()
{
    init();
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    minn=a[1];
    for(int i=2;i<=n;i++)
    {
        minn&=a[i];
    }
    if(minn>0)
    {
        printf("1\n");
        return ;
    }
    for(int i=1;i<=n;i++)
    {
        int j=i;
        int now=a[i];
        while(j<n&&now>0)
        {
            now&=a[++j];
        }
        if(now==0)
        {
            ans++;
        }
        i=j;
    }
    printf("%d\n",ans);
    return ;
}

int main()
{
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    int T;
    scanf("%d",&T);
    while(T--)
    {
        solve();
    }
    return 0;
}
```