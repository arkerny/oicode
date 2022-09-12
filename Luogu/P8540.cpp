#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define fo(_var,_a,_b) for(int _var=_a;_var<=_b;_var++)
#define fr(_var,_a,_b) for(int _var=_a;_var>=_b;_var--)
#define foo(_var,_a,_b,_c) for(int _var=_a;_var<=_b;_var+=_c)
#define frr(_var,_a,_b,_c) for(int _var=_a;_var>=_b;_var-=_c)
#define clr(_arr,_val) memset(_arr,_val,sizeof(_arr));

il ll read()
{
    ll s=0,w=1;
    char c=getchar();
    while(!isdigit(c))
        w=-1,c=getchar();
    while(isdigit(c))
        s=s*10+(c^48),c=getchar();
    return s*w;
}

ll a,b,c;

il ll lowbit(ll _x)
{
    return (_x&-_x);
}

il ll odd(ll _x)
{
    return (_x&1);
}

int main()
{
    a=read();
    b=read();
    c=read();
    if(odd(a)&&odd(b)&&odd(c))
    {
        printf("%lld",lowbit(c-1));
    }
    else if(odd(a)&&odd(b)&&!odd(c))
    {
        putchar('1');
    }
    else if(odd(a)&&!odd(b)&&odd(c))
    {
        putchar('1');
    }
    else if(odd(a)&&!odd(b)&&!odd(c))
    {
        putchar('1');
    }
    else if(!odd(a)&&odd(b)&&odd(c))
    {
        putchar('1');
    }
    else if(!odd(a)&&odd(b)&&!odd(c))
    {
        printf("%lld",lowbit(c));
    }
    else if(!odd(a)&&!odd(b)&&odd(c))
    {
        printf("%lld",lowbit(c-1));
    }
    else if(!odd(a)&&!odd(b)&&!odd(c))
    {
        printf("%lld",lowbit(c));
    }
    return 0;
}
