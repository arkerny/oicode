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

inline ll read()
{
    int s=0,w=1;
    char c=getchar();
    while(!isdigit(c))
        w=-1,c=getchar();
    while(isdigit(c))
        s=s*10+(c^48),c=getchar();
    return s*w;
}

ll a,b;

int main()
{
    int T=read();
    while(T--)
    {
        scanf("%lld%lld",&a,&b);
        int ans=2;
        if(a>=5)
        {
            ans+=2;
        }
        else if(a>=3)
        {
            ++ans;
        }
        if(b>=60000000)
        {
            ans+=4;
        }
        else if(b>=40000000)
        {
            ans+=3;
        }
        else if(b>=20000000)
        {
            ans+=2;
        }
        else if(b>=10000000)
        {
            ans+=1;
        }
        printf("%d\n",ans);
    }
    return 0;
}
