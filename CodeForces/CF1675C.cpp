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
char str[200010];
int T;

void solve()
{
    scanf("%s",str+1);
    n=strlen(str+1);
    int tot=0,ans=0;
    fo(i,1,n)
    {
        if(str[i]=='1')
        {
            tot++;
        }
    }
    fo(i,1,n)
    {
        if(str[i-1]=='0')
        {
            break;
        }
        if(str[i]=='1')
        {
            tot--;
        }
        if(tot==0)
        {
            ans++;
        }
    }
    printf("%d\n",ans);
}

int main()
{
    scanf("%d",&T);
    while(T--)
    {
        solve();
    }
    

    return 0;
}
