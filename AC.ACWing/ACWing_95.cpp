#include<bits/stdc++.h>
#define MAXN 100010
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
 
ll a[20][20],b[20][20],book[20],n,m,ans,sum;
 
void slove(ll now)
{
    if(now>m)
    {
        bool flag=1;
        sum=0;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                b[i][j]=a[i][j];
        for(int i=1;i<=m;i++)
            if(book[i])
            {
                b[1][i-1]=!b[1][i-1];
                b[1][i]=!b[1][i];
                b[1][i+1]=!b[1][i+1];
                b[0][i]=!b[0][i];
                b[2][i]=!b[2][i];
                sum++;
            }
        for(int i=2;i<=n;i++)
            for(int j=1;j<=m;j++)
                if(b[i-1][j])
                {
                    b[i][j-1]=!b[i][j-1];
                    b[i][j]=!b[i][j];
                    b[i][j+1]=!b[i][j+1];
                    b[i-1][j]=!b[i-1][j];
                    b[i+1][j]=!b[i+1][j];
                    sum++;
                }
        for(int i=1;i<=m;i++)
            if(b[n][i]==1)
                flag=0; 
        if(flag&&sum<ans)
            ans=sum;
        return ;
    }
    book[now]=0;
    slove(now+1);
    book[now]=1;
    slove(now+1);
}

int main()
{
    n=5,m=5;
    ll T;
    cin>>T;
    while(T--)
    {
        for(int i=1;i<=n;i++)
        {
            string s;
            cin>>s;
            for(int j=0;j<=s.length();j++)
                if(s[j]=='0')
                    a[i][j+1]=1;
                else
                    a[i][j+1]=0;
        }
        ans=n*m;
        slove(1);
        if(ans<=6)
            cout<<ans<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}