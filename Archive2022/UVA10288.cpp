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

ll n;

il ll calc(ll a)
{
    int p=0;
    while(a>0)
    {
        a/=10;
        p++;
    }
    return p;
}

int main()
{
    while(~scanf("%lld",&n))
    {
        ll a=0,b=1,u=0,ans=0;
        fr(i,n,1)
        {
            b=b*i;
            a=a*i+n*b/i;
            u=__gcd(a,b);
            a/=u;
            b/=u;
            ans+=a/b;
            a%=b;
        }
        if(a==0)
        {
            printf("%lld",ans);
        }
        else 
        {
            if(ans==0)
            {
                ll len1=calc(b);
                printf("%lld",a);
                putchar('\n');
                fo(i,1,len1)
                {
                    putchar('-');
                }
                putchar('\n');
                printf("%lld",b);
            }
            else 
            {
                int len1=calc(ans),len2=calc(b);
                fo(i,0,len1)
                {
                    putchar(' ');
                }
                printf("%lld",a);
                putchar('\n');
                printf("%lld ",ans);
                fo(i,1,len2)
                {
                    putchar('-');
                }
                putchar('\n');
                fo(i,0,len1)
                {
                    putchar(' ');
                }
                printf("%lld",b);
            }
        }
        putchar('\n');
    }
    return 0;
}
