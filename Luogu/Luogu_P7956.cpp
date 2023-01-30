#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int a[3010],b[3010],ans=0x3f3f3f3f,n,m; 
char ch[3010][3010];

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>ch[i][j];
            if(ch[i][j]=='X')
            {
                a[j]=i;
            }
            if(ch[i][j]=='#'&&!b[j])
            {
                b[j]=i;
            }
        } 
    }
    for(int i=1;i<=m;i++)
    {
        if(a[i])
        {
            ans=min(ans,b[i]-a[i]-1);
        }
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=m;j>=1;j--)
        {
            if(ch[i][j]=='X')
            {
                ch[i][j]='.';
                ch[i+ans][j]='X';
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<ch[i][j];
        }
        cout<<endl;
    }
    return 0;
}