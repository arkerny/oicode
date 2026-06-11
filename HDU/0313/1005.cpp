#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define lowbit(_x) (_x&-_x)
#define fo(_var,_a,_b) for(int _var=_a;_var<=_b;_var++)
#define fr(_var,_a,_b) for(int _var=_a;_var>=_b;_var--)
#define foo(_var,_a,_b,_c) for(int _var=_a;_var<=_b;_var+=_c)
#define frr(_var,_a,_b,_c) for(int _var=_a;_var>=_b;_var-=_c)

int binpow(int base, int k, int limit)
{
    int res=1;
    while(k>0)
    {
        if(k%2==1)
        {
            if(base==0)
            {
                return 0;
            }
            if (res>limit/base)
            {
                return limit+1;
            }
            res*=base;
        }
        k/=2;
        if(k>0)
        {
            if(base>limit/base&&k>0)
            {
                base=limit+1;
            }
            else
            {
                base*=base;
            }
        }
    }
    return res;
}

void solve()
{
    int n,k;
    cin>>n>>k;
    if(k>=30)
    {
        cout<<1<<endl;
        return;
    }
    int l=1, r=1;
    if(k==2) r=31622;
    else if(k==3) r=1000;
    else r=1000;

    int ans=1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(mid==0)
        {
            l=1;
            continue;
        }
        
        if (binpow(mid,k,n)<=n)
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    cout<<ans<<endl;
}

signed main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}