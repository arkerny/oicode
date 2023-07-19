#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define lowbit(_x) (_x&-_x)
#define fo(_var,_a,_b) for(int _var=_a;_var<=_b;_var++)
#define fr(_var,_a,_b) for(int _var=_a;_var>=_b;_var--)
#define foo(_var,_a,_b,_c) for(int _var=_a;_var<=_b;_var+=_c)
#define frr(_var,_a,_b,_c) for(int _var=_a;_var>=_b;_var-=_c)
#define clr(_arr,_val) memset(_arr,_val,sizeof(_arr));

ll n,m,a,b;
ll ans1,ans2,ans3;

void solve()
{
    scanf("%d%d%d%d",&a,&b,&n,&m);
    ans1=a*((n/(m+1))*m)+min(a,b)*((n%(m+1)));
    ans2=a*((n/(m+1)+1)*m);
    ans3=n*b;
    printf("%lld\n",min(ans1,min(ans2,ans3)));
    return ;
}


int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        solve();
    }

    return 0;
}
