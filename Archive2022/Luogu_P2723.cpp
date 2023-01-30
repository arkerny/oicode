#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int INF=0x7fffffff;

int k,n,a[100010],f[100010],p[100010];

int main()
{
    cin>>k>>n;
    for(int i=1;i<=k;i++)
    {
        cin>>a[i];
    }
    f[0]=1;
    for(int i=1;i<=n;i++)
    {
        int ans=INF;
        for(int j=1;j<=k;j++)
        {
            while(a[j]*f[p[j]]<=f[i-1])
            {
                p[j]++;
            }
            if(a[j]*f[p[j]]<ans)
            {
                ans=a[j]*f[p[j]];
            }
        }
        f[i]=ans;
    }
    cout<<f[n];
    return 0;
}
