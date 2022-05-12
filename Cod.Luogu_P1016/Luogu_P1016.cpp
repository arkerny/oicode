#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

const int INF = 0x3f3f3f3f;

struct Node
{
    double d,p;
}N[7];

double d1,c,d2,p,ans;
ll n,m;


int main()
{
    cin>>d1>>c>>d2>>p>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>N[i].d>>N[i].p;
    }
    for(int i=1;i<=n;i++)
    {
        if(N[i].p<N[m].p)
        {
            m=i;
        }
    }
    return 0;
}