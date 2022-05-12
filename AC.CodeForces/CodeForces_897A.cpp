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

string str;
ll n,m,l,r;
char c1,c2;

int main()
{
    cin>>n>>m;
    cin>>str;
    
    fo(i,1,m)
    {
        cin>>l>>r>>c1>>c2;
        fo(j,l-1,r-1)
        {
            if(str[j]==c1)
            {
                str[j]=c2;
            }
        }
    }
    cout<<str;
    return 0;
}