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

int n,m;
int graph[100][100],f[100][100][100][100];

int main()
{
    scanf("%d%d",&n,&m);
    fo(i,1,n)
    {
        fo(j,1,m)
        {
            scanf("%d",&graph[i][j]);
        }
    }
    fo(i,1,n)
    {
        fo(j,1,m)
        {
            fr(k,n,1)
            {
                fr(l,m,1)
                {
                    f[i][j][k][l]=max(max(f[i][j-1][k-1][l],f[i-1][j][k][l-1]),max(f[i][j-1][k][l-1],f[i-1][j][k-1][l]));
                    f[i][j][k][l]+=((i==k&&j==l)?graph[i][j]:(graph[i][j]+graph[k][l]));
                }
            }
        }
    }
    printf("%d",f[n][m][n][m]);

    return 0;
}
