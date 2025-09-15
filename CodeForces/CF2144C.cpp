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
struct Node
{
    int a,b;
}p[200010];

int ans=1;
int MOD=998244353;

void init()
{
    ans=1;
    return ;
}

void solve()
{
    init();
    cin>>n;
    fo(i,1,n)
    {
        cin>>p[i].a;
    }
    fo(i,1,n)
    {
        cin>>p[i].b;
    }
    fo(i,1,n)
    {
        if(p[i].a>p[i].b)
        {
            swap(p[i].a,p[i].b);
        }
    }
    int L=1;
    fo(i,2,n+1)
    {
        if(i==n+1||p[i].a>p[i-1].b)
        {
            int R=i-1;
            int ans0=1;
            int ans1=1;
            fo(j,L+1,R)
            {
                if(p[j].a==p[j-1].b)
                {
                    int new_ans0=(ans0+ans1)%MOD;
                    int new_ans1=(ans0+ans1)%MOD;
                    ans0=new_ans0;
                    ans1=new_ans1;
                }
            }
            int tmp=(ans0+ans1) % MOD;
            ans=(ans*tmp)%MOD;
            L=i;
        }
    }
    cout<<ans<<endl;



    // putchar('\n');
    return ;
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("CF2144C.in","r",stdin);
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
