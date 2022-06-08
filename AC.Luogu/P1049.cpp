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

ll n,w[20010],dp[20010],m;

int main()
{
    cin>>m>>n;
    fo(i,1,n)
    {
        cin>>w[i];
    }
    fo(i,1,n)
    {
        fr(j,m,w[i])
        {
            if(dp[j]<dp[j-w[i]]+w[i])
            {
                dp[j]=dp[j-w[i]]+w[i];
            }
        }
    }
    cout<<m-dp[m];
    return 0;
}