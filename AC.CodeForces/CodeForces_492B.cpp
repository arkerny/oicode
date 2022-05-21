#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define fo(v,a,b) for(ll v=a;v<=b;v++)
#define fr(v,a,b) for(ll v=a;v>=b;v--)

#define foo(v,a,b,c) for(ll v=a;v<=b;v+=c)
#define frr(v,a,b,c) for(ll v=a;v>=b;v-=c)

#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

#define il inline

ll n,l,r;
double ans,t[1010];

int main()
{
    
    cin>>n>>r;
    fo(i,1,n)
    {
        cin>>t[i];
    }
    t[n+1]=r;
    sort(t+1,t+n+1);
    ans=max(t[1],r-t[n]);
    fo(i,1,n)
    {
        ans=max(ans,(t[i+1]-t[i])/2);
    }
    cout<<fixed<<setprecision(10)<<ans;
    return 0;
}