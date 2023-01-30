#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int a[110][110];
int n,m,r,sum=0;
int x,y;

int main()
{
    cin>>n>>m>>r;
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        a[x][y]=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                double p=sqrt((x-i)*(x-i)+(y-j)*(y-j));
                if(p<=r)
                {
                    a[i][j]=1;
                }
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i][j]==1)
            {
                sum++;
            }
        }
    }
    cout<<sum;
    return 0;
}