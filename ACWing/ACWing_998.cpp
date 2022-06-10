#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int n,m,ans,x,a1=0,a2=-1;
char str[5];

int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        scanf("%s%d",str,&x);
        if(str[0]=='A')
        {
            a1&=x;
            a2&=x;
        }
        if(str[0]=='X')
        {
            a1^=x;
            a2^=x;
        }
        if(str[0]=='O')
        {
            a1|=x;
            a2|=x;
        }
    }
    for(int j=29;j>=0;j--)
    {
        if(a1>>j&1)
        {
            ans+=1<<j;
        }
        else if(a2>>j&1&&(1<<j)<=m)
        {
            ans+=1<<j;
            m-=1<<j;
        }
    }
    printf("%d",ans);
    return 0;
}