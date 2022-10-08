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

int T;
int a,b;

void solve()
{
    int num=a+b;
    char ch='0';
    fo(i,1,num)
    {
        if(a>0&&b>0)
        {
            if(ch=='1')
            {
                ch='0';
                putchar(ch);
                a--;
            }
            else
            {
                ch='1';
                putchar(ch);
                b--;
            }
        }
        else
        {
            if(a>0)
            {
                while(a--)
                {
                    putchar('0');
                }
                putchar('\n');
                return ;
            }
            else if(b>0)
            {
                while(b--)
                {
                    putchar('1');
                }
                putchar('\n');
                return ;
            }
        }
    }
    putchar('\n');
    return ;
}

int main()
{
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&a,&b);
        solve();
    }
    return 0;
}
