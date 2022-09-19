这道题是 DP 耶（而且还是比较简单的一种

一开始想到的是 BFS（好像也可以做（（（

不过貌似 DP 更简单。

使用 $dp_{i,j}$ 来表示走到位置 $(i,j)$ 的最小翻转次数。

据题意，只能从左上向右下走，所以对于 $(i,j)$ 只能从 $(i-1,j)$ 和 $(i,j-1)$ 转移。

那么，对于位置 $(i,j)$，只要 $(i-1,j)$ 或 $(i,j-1)$ 翻转过了，且位置 $(i,j)$ 也需要翻转，那么也可以延伸到 $(i,j)$，故翻转次数即为先前点的翻转次数。

而当位置 $(i,j)$ 为 `.` 时，不需要翻转，故翻转次数也为先前点的翻转次数。

不符合上述两种情况时，即位置 $(i,j)$ 需要翻转，故翻转次数加一。

代码如下：

``` cpp
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

```