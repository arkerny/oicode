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

string str;
int n,x,a[200010];
int le,ri;

void init()
{
    str="";
    return ;
}

void solve()
{
    init();
    cin>>n>>x;
    le=0;
    ri=n+1;
    cin>>str;
    fo(i,0,str.length()-1)
    {
        a[i+1]=(str[i]=='#'?1:0);
    }
    fr(i,x-1,1)
    {
        if(a[i])
        {
            le=i;
            break;
        }
    }
    fo(i,x+1,n)
    {
        if(a[i])
        {
            ri=i;
            break;
        }
    }
    // cout<<le<<' '<<ri<<endl;
    if(le==0&&ri==n+1)
    {
        cout<<"1\n";
        return ;
    }
    int ans=max(min((x-1)-1+1,n-ri+1),min(n-(x+1)+1,le-1+1));
    cout<<ans+1<<endl;
    // putchar('\n');
    return ;
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("CF2127B.in","r",stdin);
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
