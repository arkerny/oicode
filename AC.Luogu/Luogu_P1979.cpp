#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int T;

int n,m;
int sum[100];
bool vis[100],flag=0;
struct Edge
{
    int e;
    int w;
};
vector<Edge>graph[100];
void init()
{
    for(int i=1;i<=n;i++)
    {
        graph[i].clear();
        vis[i]=0;
        sum[i]=0;
    }
}

void dfs(int now,int pre,int s)
{
    if(flag)
    {
        return ;
    }
    vis[now]=1;
    sum[now]=s;
    for(int i=0;i<graph[now].size();i++)
    {
        if(!vis[graph[now][i].e])
        {
            dfs(graph[now][i].e,now,s^graph[now][i].w);
        }
        else
        {
            if(graph[now][i].w^sum[graph[now][i].e]^sum[now])
            {
                flag=1;
                return ;
            }
        }
    }
    return ;
}

int main()
{
    cin>>T;
    while(T--)
    {
        cin>>n>>m;
        init();
        for(int i=1;i<=m;i++)
        {
            int s,e,w;
            cin>>s>>e>>w;
            graph[s].push_back({e,w});
            graph[e].push_back({s,w});
        }
        flag=0;
        for(int i=1;i<=n;i++)
			if(!vis[i])
				if(!flag)
                    dfs(i,0,0);
                else
                    break;
        if(flag)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
    

    return 0;
}
