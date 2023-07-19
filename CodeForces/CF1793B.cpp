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

int x,y;

void solve()
{
    scanf("%d%d",&x,&y);
    printf("%d\n",(x-y)*2);
    fo(i,y,x)
    {
        printf("%d ",i);
    }
    fr(i,x-1,y+1)
    {
        printf("%d ",i);
    }
    putchar('\n');
    return ;
}


int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        solve();
    }

    return 0;
}
