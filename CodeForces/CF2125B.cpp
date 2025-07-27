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

ll a,b,k;

void init()
{
    
    return ;
}

void solve()
{
    init();
    cin>>a>>b>>k;
    ll tmpa,tmpb;
    ll tmp2;
    tmp2=__gcd(a,b);
    tmpa=a/tmp2;
    tmpb=b/tmp2;
    if(a==b||(tmpa<=k&&tmpb<=k)||(a==0||b==0))
    {
        cout<<"1";
    }
    else
    {
        cout<<"2";
    }


    putchar('\n');
    return ;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("CF2125B.in","r",stdin);
    // freopen(".out","w",stdout);
    #endif
    int T;
    scanf("%d",&T);
    while(T--)
    {
        solve();
    }
    return 0;
}
