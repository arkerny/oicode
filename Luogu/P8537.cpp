#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define lowbit(_x) (_x&-_x)
#define fo(_var,_a,_b) for(register int _var(_a);_var<=_b;++_var)
#define fr(_var,_a,_b) for(register int _var(_a);_var>=_b;--_var)
#define foo(_var,_a,_b,_c) for(int _var=_a;_var<=_b;_var+=_c)
#define frr(_var,_a,_b,_c) for(int _var=_a;_var>=_b;_var-=_c)
#define clr(_arr,_val) memset(_arr,_val,sizeof(_arr));

int n,a[500010],tmp,ans1,ans2=1;

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

int main()
{
    n=read();
    fo(i,1,n)
    {
        a[i]=read();
    }
    fo(i,1,n)
    {
        tmp=read();
        (a[i]!=tmp)&&ans1++;
        (a[n-i+1]!=tmp)&&ans2++;
        
    }
    printf("%d",ans1-ans2>>31?ans1:ans2);
    return 0;
}
