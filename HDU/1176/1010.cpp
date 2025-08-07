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
#define int ll

int n;
int aa[100010];
double a[100010];
double dp[100010];

void init()
{
    fo(i,1,n+1)
    {
        dp[i]=10000000.0;
    }
    return ;
}

void solve()
{
    cin>>n;
    init();
    fo(i,1,n)
    {
        cin>>aa[i];
        a[i]=double(aa[i])/1000;
    }
    dp[n]=n;
    fr(i,n-1,1)
    {
        dp[i]=min(dp[i+1],i*(1-a[i])+(dp[i+1]+20)*a[i]);
    }
    printf("%.9lf\n",dp[1]);


    // putchar('\n');
    return ;
}

signed main()
{
    IOS
    #ifndef ONLINE_JUDGE
    // freopen("1010.in","r",stdin);
    // freopen(".out","w",stdout);
    #endif
    int T;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
