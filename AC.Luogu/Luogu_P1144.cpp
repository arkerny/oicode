#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

vector<int>graph[1000010];
int dep[1000010];
bool vis[1000010];
int ans[1000010];

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    queue<int>q;
    dep[1]=0;
    vis[1]=1;
    q.push(1);
    ans[1]=1;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        for(int i=0;i<graph[x].size();i++)
        {
            int t=graph[x][i];
            if(!vis[t])
            {
                vis[t]=1;
                dep[t]=dep[x]+1;
                q.push(t);
            }
            if(dep[t]==dep[x]+1)
            {
                ans[t]=(ans[t]+ans[x])%100003;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}