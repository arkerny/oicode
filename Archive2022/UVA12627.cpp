#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define lowbit(_x) (_x&-_x)
#define fo(_v,_a,_b) for(int _v=_a;_v<=_b;_v++)
#define fr(_v,_a,_b) for(int _v=_a;_v>=_b;_v--)
#define foo(_v,_a,_b,_c) for(int _v=_a;_v<=_b;_v+=_c)
#define frr(_v,_a,_b,_c) for(int _v=_a;_v>=_b;_v-=_c)

ll k,a,b;
ll f[31];
ll ans;

ll binpow(ll a,ll b)
{
    ll res=1;
    while(b>0) 
    {
        if(b&1)
        {
            res=res*a;
        }
        a=a*a;
        b>>=1;
    }
    return res;
}

void fun(ll num,ll l,ll r)
{
    if(a<=l&&b>=r)
    {
        ans+=num;
        return ;
    }
    if(r>=a&&(l+r)/2+1<=b)
    {
        fun(num/3,(l+r)/2+1,r);
    }
    if(l<=b&&(l+r)/2>=a)
    {
        fun(num/3*2,l,(l+r)/2);
    }
}

int main()
{
    f[0]=1;
    fo(i,1,30)
    {
        f[i]=3*f[i-1];
    }
    ll T;
    scanf("%lld",&T);
    fo(i,1,T)
    {
        scanf("%lld%lld%lld",&k,&a,&b);
        ans=0;
        fun(f[k],1,binpow(2,k));
        printf("Case %lld: %lld\n",i,ans);
    }
    return 0;
}