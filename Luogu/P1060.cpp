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

ll dp[30010],n,m,v[30],w[30];

int main()
{
    
    cin>>n>>m;
    fo(i,1,m)
    {
        cin>>v[i]>>w[i];
        w[i]=w[i]*v[i];
    }
    fo(i,1,m)
        fr(j,n,0)
            if(j>=v[i])
                dp[j]=max(dp[j-v[i]]+w[i],dp[j]);
    cout<<dp[n];
    return 0;
}