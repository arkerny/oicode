#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline

struct node
{
    ll x1,y1,x2,y2;
    bool flag;
};

ll T,n,m;
bool graph[110][110];
bool vis[110][110];
node find(ll x,ll y)
{
    node ans;
    if(x==1)
    {
        if(vis[x][y-1]==0)
        {
            ans.x1=x;
            ans.y1=y-1;
            ans.x2=x;
            ans.y2=y;
            ans.flag=1;
            vis[x][y]=1;
        }
        else
        {
            ans.flag=0;
        }
    }
    else if(y==1)
    {
        if(vis[x-1][y]==0)
        {
            ans.x2=x;
            ans.y2=y;
            ans.x1=x-1;
            ans.y1=y;
            ans.flag=1;
            vis[x][y]=1;
        }
        else
        {
            ans.flag=0;
        }
    }
    else
    {
        if(vis[x][y-1]==0)
        {
            ans.x1=x;
            ans.y1=y-1;
            ans.x2=x;
            ans.y2=y;
            ans.flag=1;
            vis[x][y]=1;
        }
        else if(vis[x-1][y]==0)
        {
            ans.x2=x;
            ans.y2=y;
            ans.x1=x-1;
            ans.y1=y;
            ans.flag=1;
            vis[x][y]=1;
        }
        else
        {
            ans.flag=0;
        }
    }
    return ans;
}

void slove(bool num)
{
    if(num)
    {
        cout<<0<<endl;
        return ;
    }
    if(graph[1][1]==1)
    {
        cout<<"-1"<<endl;
        return ;
    }
    ll f=0;
    queue<node>q;
    for(int i=n;i>=1;i--)
    {
        for(int j=m;j>=1;j--)
        {
            if(graph[i][j])
            {
                node pos=find(i,j);
                if(!pos.flag)
                {
                    cout<<"-1"<<endl;
                    return ;
                }
                else
                {
                    q.push(pos);
                }
                f++;
            }
        }
    }
    cout<<f<<endl;
    while(f--)
    {
        node pos=q.front();
        cout<<pos.x1<<' '<<pos.y1<<' '<<pos.x2<<' '<<pos.y2<<endl;
        q.pop();
    }
    return ;
}
bool num;
int main()
{
    cin>>T;
    while(T--)
    {
        num=1;
        cin>>n>>m;
        memset(graph,0,sizeof(graph));
        memset(vis,0,sizeof(vis));
        for(int i=1;i<=n;i++)
        {
            string tmp;
            cin>>tmp;
            for(int j=0;j<=m-1;j++)
            {
                if(tmp[j]=='1')
                {
                    graph[i][j+1]=1;
                    num=0;
                }
            }
        }
        slove(num);
    }
    return 0;
}