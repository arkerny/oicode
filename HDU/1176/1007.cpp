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

int mod = 1e9+7;

int n,k;

int qpow(int a,int n)
{
    int ret=1;
    while(n)
    {
        if(n&1)
        {
            ret=ret*a%mod;
        }
        a=a*a%mod;
        n>>=1;
    }
    return ret;
}

int inv(int num)
{
    return qpow(num,mod-2);
}

void init()
{
    
    return ;
}

void solve()
{
    init();
    cin>>n>>k;
    cout<<(k)*inv(n-k+1)%mod<<endl;

    // putchar('\n');
    return ;
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("1007.in","r",stdin);
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
