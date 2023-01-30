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

ll n,k,a[100010],ans;

int main()
{
    
    cin>>n>>k;
    fo(i,1,n)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    fo(i,1,k)
    {
        a[i]=a[i]-1+i;
    }
    fo(i,1,k)
    {
        ans+=a[i];
    }
    cout<<ans;
    return 0;
}