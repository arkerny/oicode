#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int n,m,t[110],p[110],x[110],sum;

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>t[i];
        sum+=t[i];
    }
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>p[i]>>x[i];
        cout<<sum-t[p[i]]+x[i]<<endl;
    }
    return 0;
}