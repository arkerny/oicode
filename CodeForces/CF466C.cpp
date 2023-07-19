#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define lowbit(_x) (_x&-_x)
#define fo(_var,_a,_b) for(int _var=_a;_var<=_b;_var++)
#define fr(_var,_a,_b) for(int _var=_a;_var>=_b;_var--)
#define foo(_var,_a,_b,_c) for(int _var=_a;_var<=_b;_var+=_c)
#define frr(_var,_a,_b,_c) for(int _var=_a;_var>=_b;_var-=_c)
#define clr(_arr,_val) memset(_arr,_val,sizeof(_arr));

ll n;
ll a[500010],sum1[500010],sum2[500010],cnt1[500010],cnt2[500010],x,ans;

void init()
{
    clr(sum1,0);
    clr(sum2,0);
    clr(cnt1,0);
    clr(cnt2,0);
    x=0;
    return ;
}

void solve()
{
    init();
    scanf("%d",&n);
    fo(i,1,n)
    {
        scanf("%lld",&a[i]);
        sum1[i]=sum1[i-1]+a[i];
    }
    fr(i,n,1)
    {
        sum2[i]=sum2[i+1]+a[i];
    }
    if(sum1[n]%3!=0)
    {
        printf("0\n");
        return ;
    }
    x=sum1[n]/3;

    fo(i,1,n)
    {
        cnt1[i]=cnt1[i-1]+((sum1[i]==x)?1:0);
    }
    fr(i,n,1)
    {
        cnt2[i]=cnt2[i+1]+((sum2[i]==x)?1:0);
    }

    fo(i,1,n)
    {
        if(sum1[i]==x)
        {
            ans+=(cnt2[i+2]);
        }
    }
    printf("%lld\n",ans);
    // putchar("\n");
    return ;
}

int main()
{
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    int T;
    T=1;
    while(T--)
    {
        solve();
    }
    return 0;
}