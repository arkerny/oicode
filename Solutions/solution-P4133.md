考虑记忆化搜索：

对于数 $n$：

从大到小枚举上界 $lim$（从小到大枚举显然可以预先计算一部分更小的结果，故复杂度有较大优化）。

对于斐波那契数 $Fib_m$ 当 $n$ 大于 $\sum\limits_{k=1}^{m-1}Fib_k$ 时选择 $Fib_k$ 显然优于其他方案，故使用前缀和与二分来对下界枚举的复杂度进行优化。

加上这两个优化以后就可以过了。

``` cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define lowbit(_x) (_x&-_x)
#define clr(_arr,_val) memset(_arr,_val,sizeof(_arr));

ll fib[110];
ll sum[110];
ll n;

map<pair<ll,int>,ll> mem;   //记忆化数组

ll dfs(ll n,int lim)
{
    if(n==0)
    {
        return 1;
    }
    if(mem[make_pair(n,lim)])
    {
        return mem[make_pair(n,lim)];
    }
    ll ans=0;
    int pos=lower_bound(sum+1,sum+88,n)-sum;
    for(int i=pos;i<=lim;i++)
    {
        if(fib[i]<=n)
        {
            ans+=dfs(n-fib[i],i-1);
        }
        else
        {
            break;
        }
    }
    mem[make_pair(n,lim)]=ans;
    return ans;
}

void init()
{
    fib[0]=fib[1]=1;
    for(int i=2;i<=90;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    for(int i=1;i<=90;i++)
    {
        sum[i]=sum[i-1]+fib[i];
    }
    return ;
}

int main()
{
    init();
    scanf("%lld",&n);
    printf("%lld",dfs(n,87));   //打表可知与第一的超过 1e18 的斐波那契数位于数列第 88 个
    return 0;
}
```