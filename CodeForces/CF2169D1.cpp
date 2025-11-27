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

int x,y,k;
int maxn=1e12;

void init()
{
    
    return ;
}

int calc(int n)
{
    fo(i,1,x)
    {
        int d=n/y;
        n-=d;
        if(n<y)
        {
            return n;
        }
    }
    return n;
}

void solve()
{
    init();
    cin>>x>>y>>k;
    int last=calc(maxn);
    if(k>last)
    {
        cout<<-1<<endl;
        return;
    }
    int le=1,ri=maxn,ans;
    while(le<=ri)
    {
        int mid=le+(ri-le)/2;
        int now_last=calc(mid);
        if (now_last>=k)
        {
            ans=mid;
            ri=mid-1;
        }
        else
        {
            le=mid+1;
        }
    }
    cout<<ans<<endl;

    // putchar('\n');
    return ;
}

signed main()
{
    IOS
    #ifndef ONLINE_JUDGE
    freopen("CF2169D1.in","r",stdin);
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
