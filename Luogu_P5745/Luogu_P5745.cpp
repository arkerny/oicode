#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

const int INF = 0x3f3f3f3f;

ll n,m,a[4000010],b[4000010];

bool cmp(ll tmp1,ll tmp2)
{
    return tmp1>=tmp2;
}

int main()
{

    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=b[i-1]+a[i];
    }
    for(int i=1;i<=n;i++)
    {
        ll *p=lower_bound(a+i+1,a+n+1,,cmp);
        *p=0;
    }


    return 0;
}