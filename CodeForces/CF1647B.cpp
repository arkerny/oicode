#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline

ll T,n,m,graph[110][110];

bool find1(ll x,ll y)
{
    if(graph[x-1][y-1]==1&&graph[x-1][y]==1&&graph[x][y-1]==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool find2(ll x,ll y)
{
    if(graph[x+1][y-1]==1&&graph[x+1][y]==1&&graph[x][y-1]==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool find3(ll x,ll y)
{
    if(graph[x-1][y+1]==1&&graph[x-1][y]==1&&graph[x][y+1]==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool find4(ll x,ll y)
{
    if(graph[x+1][y+1]==1&&graph[x+1][y]==1&&graph[x][y+1]==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


bool slove()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(!graph[i][j])
            {
                if(i==1&&j==1)
                {
                    if(find4(i,j))
                    {
                        return 0;
                    }
                }
                else if(i==1)
                {
                    if(find2(i,j))
                    {
                        return 0;
                    }
                    else if(find4(i,j))
                    {
                        return 0;
                    }
                }
                else if(j==1)
                {
                    if(find3(i,j))
                    {
                        return 0;
                    }
                    else if(find4(i,j))
                    {
                        return 0;
                    }
                }
                else
                {
                    if(find1(i,j))
                    {
                        return 0;
                    }
                    else if(find2(i,j))
                    {
                        return 0;
                    }
                    else if(find3(i,j))
                    {
                        return 0;
                    }
                    else if(find4(i,j))
                    {
                        return 0;
                    }
                }
            }
        }
    }
    return 1;
}

int main()
{
    cin>>T;
    while(T--)
    {
        cin>>n>>m;
        memset(graph,0,sizeof(graph));
        for(int i=1;i<=n;i++)
        {
            string tmp;
            cin>>tmp;
            for(int j=0;j<=m-1;j++)
            {
                if(tmp[j]=='1')
                {
                    graph[i][j+1]=1;
                }
            }
        }
        if(slove())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}