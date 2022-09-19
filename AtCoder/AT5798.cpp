#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline

int n,m;
char a[110][110];
int f[110][110];

int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        scanf("%s",a[i]+1);
    }
    f[1][1]=a[1][1]=='#'?1:0;
    for(int i=2;i<=n;i++)
    {
        if(a[i][1]=='.'||a[i][1]==a[i-1][1])
        {
            f[i][1]=f[i-1][1];
        }
        else
        {
            f[i][1]=f[i-1][1]+1;
        }
    }
    for(int i=2;i<=m;i++)
    {
        if(a[1][i]=='.'||a[1][i]==a[1][i-1])
        {
            f[1][i]=f[1][i-1];
        }
        else
        {
            f[1][i]=f[1][i-1]+1;
        }
    }
    int x,y;
    for(int i=2;i<=n;i++)
    {
        for(int j=2;j<=m;j++)
        {
            x=f[i-1][j]+1;
            y=f[i][j-1]+1;
            if(a[i][j]=='.')
            {
                x=f[i-1][j];
                y=f[i][j-1];
            }
            if(a[i][j]==a[i-1][j])
            {
                x=f[i-1][j];
            }
            if(a[i][j]==a[i][j-1])
            {
                y=f[i][j-1];
            }
            f[i][j]=min(x,y);
        }
    }
    printf("%d",f[n][m]);
    return 0;
}
