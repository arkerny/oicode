#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define lowbit(_x) (_x&-_x)
#define fo(_v,_a,_b) for(int _v=_a;_v<=_b;_v++)
#define fr(_v,_a,_b) for(int _v=_a;_v>=_b;_v--)
#define foo(_v,_a,_b,_c) for(int _v=_a;_v<=_b;_v+=_c)
#define frr(_v,_a,_b,_c) for(int _v=_a;_v>=_b;_v-=_c)

int n,k,a[1000010];
const int mod=100003;

int main()
{
    scanf("%d%d",&n,&k);
    a[0]=a[1]=1;
    fo(i,2,n)
    {
        if(i<=k)
        {
            a[i]=a[i-1]*2%mod;
        }
        else
        {
            a[i]=a[i-1]*2-a[i-k-1];
            a[i]%=mod;
        }
    }
    printf("%d",(a[n]+mod)%mod);
    return 0;
}