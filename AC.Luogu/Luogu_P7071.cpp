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

ll n;
ll dic[31];

ll binpow(ll a, ll b)
{
    if(b==0)
    {
        return 1;
    }
    ll res=binpow(a,b/2);
    if(b%2)
    {
        return res*res*a;
    }
    else
    {
        return res*res;
    }
}

int main()
{
    
    cin>>n;
    if(n%2==1)
    {
        cout<<"-1";
        return 0;
    }
    fo(i,1,30)
    {
        dic[i]=binpow(2,i);
    }
    fr(i,30,1)
    {
        if(n>=dic[i])
        {
            cout<<dic[i]<<' ';
            n-=dic[i];
        }
    }
    return 0;
}