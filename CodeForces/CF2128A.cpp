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

int n;
int a[100],c;

void init()
{
    
    return ;
}

void solve()
{
    init();
    cin>>n>>c;
    fo(i,1,n)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    while(n)
    {
        int pos=upper_bound(a+1,a+n+1,c)-a;
        if(pos==1)
        {
            printf("%lld\n",n);
            return ;
        }
        a[pos-1]=a[n];
        n--;
        fo(j,1,n)
        {
            a[j]*=2;
        }
        sort(a+1,a+n+1);
    }
    printf("0\n");

    // putchar('\n');
    return ;
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("CF2128A.in","r",stdin);
    // freopen(".out","w",stdout);
    #endif
    int T;
    scanf("%lld",&T);
    while(T--)
    {
        solve();
    }
    return 0;
}