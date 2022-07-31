#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define lowbit(_x) (_x&-_x)
#define fo(_var,_a,_b) for(int _v=_a;_v<=_b;_v++)
#define fr(_var,_a,_b) for(int _v=_a;_v>=_b;_v--)
#define foo(_var,_a,_b,_c) for(int _v=_a;_v<=_b;_v+=_c)
#define frr(_var,_a,_b,_c) for(int _v=_a;_v>=_b;_v-=_c)
#define clr(_arr,_val) memset(_arr,_val,sizeof(_arr));

ll head,nxt,n;

int main()
{
    scanf("%lld%lld%lld",&head,&nxt,&n);
    ll d=nxt-head;
    printf("%lld",n*head+n*(n-1)*d/2);
    return 0;
}
