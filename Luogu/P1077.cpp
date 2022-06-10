#include<bits/stdc++.h>
using namespace std;
int n,m,a[110],f[110][110];
int dfs(int x,int k)
{
    if(k>m)
    {
        return 0;
    }
    if(k==m)
    {
        return 1;
    }
    if(x==n+1)
    {
        return 0;
    }
    if(f[x][k])
    {
        return f[x][k];
    }
    int ans=0;
    for(int i=0;i<=a[x];i++)
    {
        ans=(ans+dfs(x+1,k+i))%1000007;
    }
    f[x][k]=ans;
    return ans;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<dfs(1,0);
    return 0;
}