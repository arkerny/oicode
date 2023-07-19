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

int n,ans,a[2000010],minn;

void init()
{
    ans=0;
    return ;
}

void solve()
{
    init();
    scanf("%d",&n);
    fo(i,1,n)
    {
        scanf("%d",&a[i]);
    }
    minn=a[1];
    fo(i,2,n)
    {
        minn&=a[i];
    }
    if(minn>0)
    {
        printf("1\n");
        return ;
    }

    fo(i,1,n)
    {
        int j=i;
        int now=a[i];
        while(j<n&&now>0)
        {
            now&=a[++j];
        }
        if(now==0)
        {
            ans++;
        }
        i=j;
    }

    printf("%d",ans);
    putchar('\n');
    return ;
}

signed main()
{
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    int T;
    scanf("%d",&T);
    while(T--)
    {
        solve();
    }
    return 0;
}