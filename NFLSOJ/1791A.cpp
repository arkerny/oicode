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

int n;
int x=1,y=105,y_min=200,y_max=1;
char str[110];
char ans[210][110];

int main()
{
    freopen("paint.in","r",stdin);
    freopen("paint.out","w",stdout);
    clr(ans,'.');
    scanf("%d",&n);
    scanf("%s",str+1);
    y_min=min(y_min,y);
    y_max=max(y_max,y);
    fo(i,1,n)
    {
        if(str[i]=='+')
        {
            if(str[i-1]=='+')
            {
                y--;
            }
            ans[y][x]='/';
            x++;
            y_min=min(y_min,y);
        }
        else if(str[i]=='-')
        {
            if(str[i-1]=='-'||str[i-1]=='=')
            {
                y++;
            }
            ans[y][x]='\\';
            x++;
            y_max=max(y_max,y);
        }
        else if(str[i]=='=')
        {
            if(str[i-1]=='+')
            {
                y--;
                y_min=min(y_min,y);
            }
            ans[y][x]='_';
            x++;
        }
    }
    fo(i,y_min,y_max)
    {
        fo(j,1,n)
        {
            printf("%c",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
