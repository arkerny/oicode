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

int n,m,k;
int cnt=1;

int main()
{
    scanf("%d%d%d",&n,&m,&k);
    if(k==1)
    {
        fo(i,1,n)
        {
            printf("%c",(i&1?'l':'r'));
        }
        return 0;
    }
    fo(i,1,m-2)
    {
        printf("%c",(i&1?'l':'r'));
    }
    printf("rl");
    fo(i,m+1,n)
    {
        if(cnt==0)
        {
            printf("l");
        }
        else
        {
            printf("r");
        }
        cnt++;
        cnt%=3;
    }
    return 0;
}