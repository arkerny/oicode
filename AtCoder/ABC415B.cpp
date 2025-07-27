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

int tot,p=1;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("B.in","r",stdin);
    // freopen(".out","w",stdout);
    #endif
    char ch;
    while(~scanf("%c",&ch))
    {
        if(ch=='#')
        {
            if(tot==1)
            {
                tot=0;
                printf("%d\n",p);
            }
            else
            {
                tot++;
                printf("%d,",p);
            }
        }
        p++;
    }
    return 0;
}
