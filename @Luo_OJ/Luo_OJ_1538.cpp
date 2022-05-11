#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define fo(v,a,b) for(ll v=a;v<=b;v++)
#define fr(v,a,b) for(ll v=a;v>=b;v--)

#define foo(v,a,b,c) for(ll v=a;v<=b;v+=c)
#define frr(v,a,b,c) for(ll v=a;v>=b;v-=c)

#define il inline

ll n,now,k,ans;

int main()
{
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    
    cin>>k;
    now=1;
    while(1)
    {
        if(n+now<k)
        {
            ans+=now*now;
            n=n+now;
            now++;
        }
        else
        {
            ans+=(k-n)*now;
            break;
        }
    }

    cout<<ans;

    // fclose(stdin);
    // fclose(stdout);
    return 0;
}
