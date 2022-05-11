#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

const int INF = 0x3f3f3f3f;

ll T;
ll func(ll x)
{
    double p=0.0;
    ll now=x,t;
    for(int i=1;p!=1.0;i++)
    {
        t=gcd(i,now);
        if(t!=1)
        {
            i/=t;
            now/=t;
            p=i/now;
        }
    }
    return p;
}
int main()
{
    cin>>T;
    while(T--)
    {
        ll x;
        cin>>x;
        cout<<func(x);
    }


    return 0;
}