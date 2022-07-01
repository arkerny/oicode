#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

ll n,m,d,l,ans;
ll s[2000010],t[2000010];

int main()
{
    cin>>n>>m>>d>>l;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
    }
    sort(s+1,s+n+1);
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(s[j]-t[i]*d>=l)
            {
                t[i]++;
                s[j]=-1;
            }
        }
    }
    for(int i=1;i<=m;i++)
    {
        ans+=t[i];
    }
    cout<<ans;
    return 0;
}
