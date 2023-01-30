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

ll x,k;

int main()
{
    scanf("%lld%lld",&x,&k);
    while(k--)
    {
        x++;
        if(x%3==0)
        {
            x/=3;
        }
        if(x==1)
        {
            break;
        }
    }
    if(k<=0)
    {
        printf("%lld",x);
    }
    else if(k%2==0)
    {
        printf("1");
    }
    else if(k%2==1)
    {
        printf("2");
    }
    return 0;
}
