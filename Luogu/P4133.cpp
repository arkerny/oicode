#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define lowbit(_x) (_x&-_x)
#define clr(_arr,_val) memset(_arr,_val,sizeof(_arr));

ll fib[110];
ll sum[110];
ll n;

map<pair<ll,int>,ll> mem;

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
    int pos=lower_bound(sum+1,sum+87+1,n)-sum;
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