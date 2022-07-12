#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define lowbit(_x) (_x&-_x)
#define fo(_var,_a,_b) for(int _var=_a;_var<=_b;_var++)
#define fr(_var,_a,_b) for(int _var=_a;_var>=_b;_var--)
#define foo(_var,_a,_b,_c) for(int _var=_a;_var<=_b;_var+=_c)
#define frr(_var,_a,_b,_c) for(int _var=_a;_var>=_b;_var-=_c)
#define clr(_arr,_val) memset(_arr,_val,sizeof(_arr));

int a[1010][1010],d[1010][1010],n,m;

struct node
{
    int x,y;
}now;

int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};

queue<node> q;

bool check(node _node)
{
    return (_node.x>=1&&_node.x<=n&&_node.y>=1&&_node.y<=m&&d[_node.x][_node.y]==-1)?1:0;
}

int main()
{
    scanf("%d%d",&n,&m);
    getchar();
    clr(d,-1);
    fo(i,1,n)
    {
        fo(j,1,m)
        {
            char ch=getchar();
            a[i][j]=ch-'0';
            if(a[i][j])
            {
                d[i][j]=0;
                q.push(node({i,j}));
            }
        }
        getchar();
    }
    while(!q.empty())
    {
        now=q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            node nxt=node({now.x+dx[i],now.y+dy[i]});
            if(check(nxt))
            {
                d[nxt.x][nxt.y]=d[now.x][now.y]+1;
                q.push(nxt);
            }
        }
    }
    fo(i,1,n)
    {
        fo(j,1,m)
        {
            printf("%d ",d[i][j]);
        }
        putchar('\n');
    }

    return 0;
}
