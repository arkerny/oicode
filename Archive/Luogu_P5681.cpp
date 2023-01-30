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

ll a,b,c,s1,s2;

int main()
{
    
    cin>>a>>b>>c;
    s1=a*a;
    s2=b*c;
    if(s1>s2)
    {
        cout<<"Alice";
    }
    else
    {
        cout<<"Bob";
    }
    
    return 0;
}