#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define lowbit(_x) (_x&-_x)
#define fo(_var,_a,_b) for(int _var=_a;_var<=_b;_var++)
#define fr(_var,_a,_b) for(int _var=_a;_var>=_b;_var--)
#define foo(_var,_a,_b,_c) for(int _var=_a;_var<=_b;_var+=_c)
#define frr(_var,_a,_b,_c) for(int _var=_a;_var>=_b;_var-=_c)
#define clr(_arr,_val) memset(_arr,_val,sizeof(_arr));

int vis[200000000],book[200000000],cnt;

bool check(int x)
{
    while(x)
    {
        if(x%10==7)
        {
            return 0;
        }
        x/=10;
    }
    return 1;
}

void init()
{
    fo(i,1,20000000)
    {
        if(vis[i]==0)
        {
            if(check(i))
            {
                vis[i]=++cnt;
                book[cnt]=i;
            }
            else
            {
                for(int j=1;i*j<=20000000;j++)
                {
                    vis[i*j]=-1;
                }
            }
        }
    }
    return ;
}

int T;
int x;

int main()
{
    init();
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&x);
        if(vis[x]==-1)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n",book[vis[x]+1]);
        }
    }
    return 0;
}