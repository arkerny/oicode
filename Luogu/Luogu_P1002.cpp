#include<bits/stdc++.h>
using namespace std;
long long a[30][30],book[30][30],x,y,m,n;
int main()
{
    cin>>n>>m>>x>>y;
    a[0][1]=1;
    book[x][y]=1;
    book[x-1][y-2]=1;
    book[x-2][y-1]=1;
    book[x-2][y+1]=1;
    book[x-1][y+2]=1;
    book[x+1][y-2]=1;
    book[x+2][y-1]=1;
    book[x+2][y+1]=1;
    book[x+1][y+2]=1;
    for(int i=1;i<=n+1;++i)
    {
        for(int j=1;j<=m+1;++j)
        {
            a[i][j]=a[i-1][j]+a[i][j-1];
            if(book[i-1][j-1])
            {
                a[i][j]=0;
            }
        }
    }
    cout<<a[n+1][m+1];
    return 0;
}