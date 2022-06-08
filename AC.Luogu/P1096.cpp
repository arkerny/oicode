#include<bits/stdc++.h>
using namespace std;

/*-----Defines Start-----*/

typedef long long ll;
typedef unsigned long long ull;

#define il inline

#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define fo(v,a,b) for(ll v=a;v<=b;v++)
#define fr(v,a,b) for(ll v=a;v>=b;v--)

#define foo(v,a,b,c) for(ll v=a;v<=b;v+=c)
#define frr(v,a,b,c) for(ll v=a;v>=b;v-=c)

#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

/*-----Defines End-----*/


/*-----Quick Read & Write Start-----*/

/*-----Quick Read & Write End-----*/


/*-----Structs Strat-----*/

/*-----Structs End-----*/


/*-----Comparing Functions Start-----*/
/*-----Comparing Functions End-----*/


/*-----Constants Start-----*/

const int INF=0x3f3f3f3f;
const double PI=acos(-1.0);

/*-----Constants End-----*/


/*-----Variables Start-----*/
ll n;
/*-----Variables Start-----*/


/*-----Functions Start-----*/

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
/*-----Functions End-----*/


int main()
{
    // freopen("1.in","r",stdin);
    // freopen("1.out","w",stdout);

    cin>>n;

    cout<<binpow(2,n+1)-2;

    // fclose(stdin);
    // fclose(stdout);
    return 0;
}
