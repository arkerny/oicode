//我寻思着也没啥错误啊
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define lowbit(_x) (_x&-_x)
#define fo(_var,_a,_b) for(int _var=_a;_var<=_b;_var++)
#define fr(_var,_a,_b) for(int _var=_a;_var>=_b;_var--)
#define foo(_var,_a,_b,_c) for(int _var=_a;_var<=_b;_var+=_c)
#define frr(_var,_a,_b,_c) for(int _var=_a;_var>=_b;_var-=_c)
#define clr(_arr,_val) memset(_arr,_val,sizeof(_arr));

struct node
{
    ull p,q;
}t[1000010];

ull n,m,c,k;
ull a[1000010];
ull lim,ani,ans;

int main()
{
    // freopen("zoo.in","r",stdin);
    // freopen("zoo.out","w",stdout);
    scanf("%llu%llu%llu%llu",&n,&m,&c,&k);
    fo(i,1,n)
    {
        scanf("%llu",&a[i]);
        ani|=a[i];
    }
    fo(i,1,m)
    {
        scanf("%llu%llu",&t[i].p,&t[i].q);
        lim|=1ull<<t[i].p;
    }
    fo(i,0,k-1)
    {
        ans+=!((lim>>i)&1)||((ani>>i)&1);
    }
    if(ans==64&&!n)
    {
        printf("18446744073709551616");
    }
    else
    {
        if(ans==64)
        {
            printf("%llu",-n);
        }
        else
        {
            printf("%llu",ull((1ull<<ans)-n));
        }
    }
    return 0;
}