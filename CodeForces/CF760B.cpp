#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

ll n,m,k;

bool check(ll mid)
{
    ll x=k+mid-1,sum=0;
    if(x>n)
    {
        sum+=(mid+mid-n+k)*(n-k+1)/2;
    }
    else
    {
        sum+=(mid+1)*mid/2+n-k-mid+1;
    }
    x=k-mid+1;
    if(x<1)
    {
        sum+=(mid+mid-k)*(k-1)/2;
    }
    else
    {
        sum+=(mid-1)*mid/2+k-mid;
    }
    return sum<=m;
}

int main()
{
    cin>>n>>m>>k;
    ll l=1,r=m,ans;
    while(l<=r)
    {
        ll mid=(l+r)>>1;
        if(check(mid))
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    cout<<ans;
    return 0;
}