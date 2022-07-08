#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

ll n,a,b;
ll f[31];
ll ans;

void init()
{
    for(int i=1;i<=30;i++)
    {
        f[i]=3*f[i-1];
    }
    return ;
}

void fun(int num,int l,int r)
{
    if(a<=l&&b>=r)
    {
        ans+=num;
        return ;
    }
    if(r>=a&&(l+r)/2+1<=b)
    {
        fun(num/3,(l+r)/2+1,r);
    }
    if(l<=b&&(l+r)/2>=a)
    {
        fun(num/3*2,l,(l+r)/2);
    }
}

int main()
{
    int T;
    scanf("%d",&T);
    f[0]=1;
    init();
    int i=1;
    while(T--)
    {
        scanf("%d%d%d",&n,&a,&b);
        ans=0;
        fun(f[n],1,pow(2,n));
        printf("Case %d: %d\n",i,ans);
        i++;
    }
    return 0;
}
