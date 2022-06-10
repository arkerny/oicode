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

ll l,r,ans;

int main()
{
    
    cin>>l>>r;
    fo(i,l,r)
    {
        ll t=i;
        while(t>0)
        {
            if(t%10==2)
            {
                ans++;
            }
            t/=10;
        }
    }
    cout<<ans;
    return 0;
}