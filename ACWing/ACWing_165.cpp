#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int n,w,a[20];
int f[1<<20],g[1<<20];

int main()
{
    scanf("%d%d",&n,&w);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    memset(f,0x3f,sizeof(f));
    f[0]=0;
    g[0]=0;
    for(int i=1;i<(1<<n);i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(!(i&(1<<j)))
            {
                continue;
            }
            if(g[i&~(1<<j)]-a[j]>=0&&f[i]>=f[i&~(1<<j)])
            {
                f[i]=f[i&~(1<<j)];
                g[i]=max(g[i],g[i&~(1<<j)]-a[j]);
            }
            if(g[i&~(1<<j)]-a[j]<0&&f[i]>=f[i&~(1<<j)]+1)
            {
                f[i]=f[i&~(1<<j)]+1;
                g[i]=max(g[i],w-a[j]);
            }
        }
    }
    printf("%d",f[(1<<n)-1]);

    return 0;
}
