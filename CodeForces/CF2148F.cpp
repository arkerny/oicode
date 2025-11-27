#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define lowbit(_x) (_x&-_x)
#define fo(_var,_a,_b) for(int _var=_a;_var<_b;_var++)
#define fr(_var,_a,_b) for(int _var=_a;_var>_b;_var--)
#define foo(_var,_a,_b,_c) for(int _var=_a;_var<_b;_var+=_c)
#define frr(_var,_a,_b,_c) for(int _var=_a;_var>_b;_var-=_c)
#define int ll

int n;

void init()
{
    
    return ;
}

void solve()
{
    init();
    cin>>n;
    vector<vector<int>> a(n);
    int maxk=0;
    fo(i,0,n)
    {
        int k;
        cin>>k;
        maxk=max(k,maxk);
        fo(j,0,k)
        {
            int tmp;
            cin>>tmp;
            a[i].push_back(tmp);
        }
    }
    vector<int> ans;
    while(ans.size()<maxk)
    {
        sort(a.begin(),a.end());
        int pos;
        fo(i,0,n)
        {
            if(!a[i].empty())
            {
                pos=i;
                break;
            }
        }
        int len=a[pos].size();
        for(auto i:a[pos])
        {
            ans.push_back(i);
        }
        fo(i,0,n)
        {
            if(!a[i].empty())
            {
                a[i].erase(a[i].begin(),a[i].begin()+min(len,int(a[i].size())));
            }
        }
    }
    for(auto i:ans)
    {
        cout<<i<<' ';
    }
    putchar('\n');
    return ;
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("CF2148F.in","r",stdin);
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
