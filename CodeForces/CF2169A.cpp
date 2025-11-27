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
#define int ll

int n,x,a[300010];

void init()
{
    
    return ;
}

void solve()
{
    init();
    scanf("%d%d",&n,&x);
    fo(i,1,n)
    {
        scanf("%d",&a[i]);
    }
    int le_cnt=0,ri_cnt=0;
    fo(i,1,n)
    {
        if(a[i]<x)
        {
            le_cnt++;
        }
    }
    fo(i,1,n)
    {
        if(a[i]>x)
        {
            ri_cnt++;
        }
    }
    if(ri_cnt>le_cnt)
    {
        printf("%d\n",x+1);
    }
    else
    {
        printf("%d\n",x-1);

    }
    // putchar('\n');
    return ;
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("CF2169A.in","r",stdin);
    // freopen(".out","w",stdout);
    #endif
    int T;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
