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

int n,a[200010],b[200010];

void init()
{
    b[1]=1;
    fo(i,2,n)
    {
        b[i]=-b[i-1];
    }
    fo(i,0,n+1)
    {
        a[i]=0;
    }
    return ;
}

void solve()
{
    cin>>n;
    init();
    int ans=0;
    fo(i,1,n)
    {
        cin>>a[i];
    }
    frr(i,n-n%2,2,2)
    {
        int dec=a[i-1]+a[i+1]-a[i];
        if(dec>0)
        {
            if(a[i-1]>dec)
            {
                a[i-1]-=dec;
                ans+=dec;
            }
            else
            {
                a[i-1]=0;
                ans+=dec;
                dec-=a[i-1];
                a[i+1]-=dec;
            }
        }
    }
    cout<<ans<<endl;

    // putchar('\n');
    return ;
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("CF2134C.in","r",stdin);
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
