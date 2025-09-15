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
int a[200010];

void solve()
{
    cin>>n;
    fo(i,1,n)
    {
        cin>>a[i];
    }
    int S = 0;
    fo(i,1,n)
    {
        if(i % 2 == 1)
        {
            S += a[i];
        }
        else
        {
            S -= a[i];
        }
    }
    int d1;
    if(n % 2 == 1)
    {
        d1 = n - 1;
    }
    else
    {
        d1 = n - 2;
    }
    
    int candidate1 = 0;
    ll min_odd = 1e18;
    fo(j,1,n)
    {
        if(j % 2 == 1)
        {
            min_odd = min(min_odd, j + 2 * a[j]);
        }
        else
        {
            if(min_odd != 1e18)
            {
                candidate1 = max(candidate1, (j + 2 * a[j]) - min_odd);
            }
        }
    }
    
    int candidate2 = 0;
    ll max_even = -1e18;
    fo(j,1,n)
    {
        if(j % 2 == 0)
        {
            max_even = max(max_even, 2 * a[j] - j);
        }
        else
        {
            if(max_even != -1e18)
            {
                candidate2 = max(candidate2, max_even - (2 * a[j] - j));
            }
        }
    }
    
    int net_change = max(d1, max(candidate1, candidate2));
    cout << S + net_change << endl;
    return ;
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("CF2140C.in","r",stdin);
    #endif
    IOS
    int T;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}