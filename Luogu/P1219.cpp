#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define lowbit(_x) (_x&-_x)
#define fo(_v,_a,_b) for(int _v=_a;_v<=_b;_v++)
#define fr(_v,_a,_b) for(int _v=_a;_v>=_b;_v--)
#define foo(_v,_a,_b,_c) for(int _v=_a;_v<=_b;_v+=_c)
#define frr(_v,_a,_b,_c) for(int _v=_a;_v>=_b;_v-=_c)

bool flag[15],l[30],r[30];
int path[15],n,ans;

void dfs(int depth)
{
    if(depth>n)
    {
        if(ans<=2)
        {
            fo(i,1,n)
            {
                printf("%d ",path[i]);
            }
            putchar('\n');
        }
        ans++;
        return;
    }
    fo(i,1,n)
    {
        if(flag[i]||l[depth-i+n]||r[i+depth])
        {
            continue;
        }
        path[depth]=i;
        flag[i]=1;
        l[depth-i+n]=1;
        r[i+depth]=1;
        dfs(depth+1);
        flag[i]=0;
        l[depth-i+n]=0;
        r[i+depth]=0;
    }
}

int main()
{
    scanf("%d",&n);
    dfs(1);
    printf("%d",ans);
    return 0;
}