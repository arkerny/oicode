#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
ll n,f[20];
int main()
{
    f[0]=f[1]=1;
    scanf("%lld",&n);
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            f[i]+=f[j]*f[i-j-1];
        }
    }
    printf("%lld",f[n]);
    return 0;
}