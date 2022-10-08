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
int n,p;
int a[200010];


void solve()
{
    int flag=0,pos=0;
    scanf("%d",&n);
    fo(i,1,n)
    {
        scanf("%d",&a[i]);
        if(a[i]!=0)
        {
            flag=1;
            pos=i;
        }
    }
    if(!flag)
    {
        printf("Yes\n");
        return ;
    }
    a[1]--;
    a[pos]++;
    ll sum=0;
    fo(i,1,pos)
    {
        sum+=a[i];
        if(sum<0)
        {
            printf("No\n");
            return ;
            flag=0;
            break;
        }
    }
    printf(flag&&sum==0?"Yes\n":"No\n");
    return ;
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
