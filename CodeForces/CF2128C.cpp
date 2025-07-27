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

int n,b[200010],minn;

void init()
{
    minn = 0x3f3f3f3f;
    fo(i,1,200000)
    {
        b[i]=0;
    }
    return ;
}

void solve()
{
    init();
    cin>>n;
    fo(i,1,n)
    {
        cin>>b[i];
    }
    bool flag=1;
    fo(i,1,n)
    {
        minn=min(minn,b[i]);
        if(b[i]>minn*2-1)
        {
            flag=0;
        }
    }
    printf(flag?"YES":"NO");
    putchar('\n');
    return ;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("CF2128C.in","r",stdin);
    // freopen(".out","w",stdout);
    #endif
    int T;
    scanf("%d",&T);
    while(T--)
    {
        solve();
    }
    return 0;
}

