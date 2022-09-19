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

int n,m,k,x;

int binpow(int a,int b,int m)
{
    a%=m;
    int res=1;
    while(b>0)
    {
        if(b&1)
        {
            res=res*a%m;
        }
        a=a*a%m;
        b>>=1;
    }
    return res%m;
}

int main()
{
    scanf("%d %d %d %d\n",&n,&m,&k,&x);
    printf("%d",(x+m*binpow(10,k,n))%n);

    return 0;
}
