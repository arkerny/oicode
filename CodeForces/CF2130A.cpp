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
int a[100010],t[100];

void init()
{
    fo(i,0,50)
    {
        t[i]=0;
    }
    return ;
}

void solve()
{
    init();
    cin>>n;
    fo(i,1,n)
    {
        cin>>a[i];
        t[a[i]]++;
    }
    int ans=0;
    while(t[0]>0&&t[1]>0)
    {
        ans+=2;
        t[0]--;
        t[1]--;
    }
    while(t[0]>0)
    {
        ans+=1;
        t[0]--;
    }
    fo(i,0,50)
    {
        fo(j,1,t[i])
        {
            ans+=i;
        }
    }
    cout<<ans;


    putchar('\n');
    return ;
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("CF2130A.in","r",stdin);
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
