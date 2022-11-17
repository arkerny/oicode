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

int n,tmp=-25;

int main()
{
    scanf("%d",&n);
    fo(i,1,n)
    {
        if(tmp==26)
        {
            tmp=-25;
        }
        printf("%c",'a'+abs(tmp));
        if(tmp==0)
        {
            continue;
        }
        else
        {
            tmp++;
        }
    }
    return 0;
}