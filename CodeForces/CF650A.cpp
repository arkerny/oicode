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
ll ans;
pair<int,int> a[200010];
map<int,int> x,y;
map<pair<int,int>,int> p;


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
        scanf("%d%d",&a[i].first,&a[i].second);
        ans+=x[a[i].first]+y[a[i].second]-p[a[i]];
        x[a[i].first]++;
        y[a[i].second]++;
        p[a[i]]++;
    }
    printf("%lld",ans);
    putchar('\n');
    return ;
}

int main()
{
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    int T;
    T=1;
    while(T--)
    {
        solve();
    }
    return 0;
}
