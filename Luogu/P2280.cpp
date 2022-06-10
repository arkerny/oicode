#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

int s[5010][5010],n,m,ans;

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        ll x,y,v;
        cin>>x>>y>>v;
        s[x+1][y+1]+=v;
    }
    for(int i=1;i<=5001;i++)
    {
        for(int j=1;j<=5001;j++)
        {
            s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+s[i][j];
        }
    }
    if(m>5001)
    {
        cout<<s[5001][5001];
        return 0;
    }
    for(int i=m;i<=5001;i++)
    {
        for(int j=m;j<=5001;j++)
        {
            ans=max(ans,s[i][j]-s[i-m][j]-s[i][j-m]+s[i-m][j-m]);
        }
    }
    cout<<ans;
    return 0;
}
