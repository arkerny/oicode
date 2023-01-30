#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define lowbit(_x) (_x&-_x)
#define fo(_var,_a,_b) for(int _var=_a;_var<=_b;_var++)
#define fr(_var,_a,_b) for(int _var=_a;_var>=_b;_var--)
#define foo(_var,_a,_b,_c) for(int _var=_a;_var<=_b;_var+=_c)
#define frr(_var,_a,_b,_c) for(int _var=_a;_var>=_b;_var-=_c)
#define clr(_arr,_val) memset(_arr,_val,sizeof(_arr));

ull T,l,r,n;
char op;

int main()
{
    scanf("%llu\n%llu %llu\n",&T,&l,&r);
    l*=2;
    r*=2;
    while(T--)
    {
        scanf("%c %d\n",&op,&n);
        if(op=='L')
        {
            if(n&1)
            {
                printf("-%llu\n",ull(n/2)*ull(l+r)+l);
            }
            else
            {
                printf("-%llu\n",ull(n/2)*ull(l+r));
            }
        }
        else if(op=='R')
        {
            if(n&1)
            {
                printf("%llu\n",ull(n/2)*ull(l+r)+r);
            }
            else
            {
                printf("%llu\n",ull(n/2)*ull(l+r));
            }
        }
    }
    return 0;
}