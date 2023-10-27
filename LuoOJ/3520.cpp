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

const ll MOD=1e9+7;

ll n,a[100010],b[100010];

ll ans=1;

int main()
{
    scanf("%lld",&n);
    fo(i,1,n)
    {
        scanf("%lld",&a[i]);
    }
    fo(i,1,n)
    {
        scanf("%lld",&b[i]);
    }
    sort(a+1,a+1+n);
    sort(b+1,b+1+n);
    int j=n;
    fr(i,n,1)
    {
        while(j>=1&&a[i]<=b[j])
        {
            j--;
        }
        ans*=(i-j);
        ans%=MOD;
    }
    printf("%lld",ans%MOD);
    return 0;
}