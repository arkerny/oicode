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
int n,a[1010],flag[1010];

void solve()
{
    clr(flag,0);
    scanf("%d",&n);
    fo(i,1,n)
    {
        scanf("%d",&a[i]);
    }
    if(n==1)
    {
        printf("-1\n");
        return ;
    }
    fo(i,1,n)
    {
        if(i==n-1&&flag[a[n]]==0)
        {
            printf("%d ",a[n]);
            flag[a[n]]=1;
        }
        fo(j,1,n)
        {
            if(j!=a[i]&&flag[j]==0)
            {
                printf("%d ",j);
                flag[j]=1;
                break;
            }
        } 
    }
    printf("\n");
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
