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

int n;
int a[100010];

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
    int pre,l,r;
    if(n%2==1)
    {
        printf("L");
        pre = 0; l = 2; r = n;
    }
    else
    {
        pre = 0; l = 1; r = n;
    }
    while(l<r)
    {
        if(a[l]<a[r]==pre)
        {
            printf("LR");
            pre^=1;
        }
        else
        {
            printf("RL");
            pre^=1;
        }
        l++;r--;
    }

    putchar('\n');
    return ;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("CF2128B.in","r",stdin);
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
