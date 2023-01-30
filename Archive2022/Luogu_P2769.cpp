#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline

const ll INF=0x7f;

ll n,m,x[5010],y[5010],dp[2][5010];

int main()
{
    scanf("%ld",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%ld",&x[i]);
    }
    scanf("%ld",&m);
    for(int i=1;i<=m;i++)
    {
        scanf("%ld",&y[i]);
    }

    sort(x+1,x+n+1);
    sort(y+1,y+m+1);
    memset(dp,INF,sizeof(dp));

    dp[1][1]=abs(x[1]-y[1]);

    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            dp[i%2][j]=min(dp[(i-1)%2][j],dp[(i-1)%2][j-1])+abs(x[i]-y[j]);
        }
    }

    cout<<dp[n%2][m];

    return 0;
}