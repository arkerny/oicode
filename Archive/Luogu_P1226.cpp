#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define fo(v,a,b) for(ll v=a;v<=b;v++)
#define fr(v,a,b) for(ll v=b;v>=a;v--)

#define foo(v,a,b,c) for(ll v=a;v<=b;v+=c)
#define frr(v,a,b,c) for(ll v=b;v>=a;v-=c)

#define il inline

ll a,b,p;

ll binpow(ll a,ll b,ll m)
{
    a%=m;
    ll res=1;
    while(b>0)
    {
        if(b&1)
        {
            res=res*a%m;
        }
        a=a*a%m;
        b>>=1;
    }
    return res%m;
}

int main()
{
    cin>>a>>b>>p;
    cout<<a<<"^"<<b<<" mod "<<p<<"="<<binpow(a,b,p);
    return 0;
}