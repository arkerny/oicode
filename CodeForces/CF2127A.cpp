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
int a[110];

void init()
{
    
    return ;
}

void solve()
{
    init();
    cin>>n;
    fo(i,1,n)
    {
        cin>>a[i];
    }
    int tmp=-2;
    fo(i,1,n)
    {
        if(a[i]==-1)
        {
            continue;
        }
        else
        {
            if(tmp==-2)
            {
                tmp=a[i];
            }
            if(a[i]!=tmp||tmp==0)
            {
                printf("NO\n");
                return ;
            }
        }
    }
    printf("YES\n");

    // putchar('\n');
    return ;
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("CF2127A.in","r",stdin);
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
