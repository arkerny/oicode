#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

ll f1[21],f2[21];
int main()
{
    for(int i=1;i<=12;i++)
    {
        f1[i]=2*f1[i-1]+1;
    }
    memset(f2,0x3f,sizeof(f2));
    f2[0]=0;
    for(int i=1;i<=12;i++)
        for(int j=0;j<i;j++)
        {
            f2[i]=min(f2[i],f2[j]+f2[j]+f1[i-j]);
        }
    for(int i=1;i<=12;i++)
    {
        cout<<f2[i]<<endl;
    }
}