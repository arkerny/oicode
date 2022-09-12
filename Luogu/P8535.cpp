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

inline int read()
{
    int s=0,w=1;
    char c=getchar();
    while(!isdigit(c))
        w=-1,c=getchar();
    while(isdigit(c))
        s=s*10+(c^48),c=getchar();
    return s*w;
}

int n;

int main()
{
    n=read();
    int num=n/5;
    n%=5;
    putchar((n>=3)?'2':'1');
    fo(i,2,num)
    {
        putchar('1');
    }
    return 0;
}
