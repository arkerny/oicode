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

ll n;

int main()
{
    // freopen("1.in","r",stdin);
    // freopen("1.out","w",stdout);
    
    cin>>n;
    if(n==0)
    {
        cout<<"Today, I ate 0 apple.";
    }
    if(n==1)
    {
        cout<<"Today, I ate 1 apple.";
    }
    if(n>1)
    {
        cout<<"Today, I ate "<<n<<" apples.";
    }

    // fclose(stdin);
    // fclose(stdout);
    return 0;
}