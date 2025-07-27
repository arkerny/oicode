#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define lowbit(_x) (_x&-_x)
#define fo(_var,_a,_b) for(int _var=_a;_var<=_b;_var++)
#define fr(_var,_a,_b) for(int _var=_a;_var>=_b;_var--)
#define foo(_var,_a,_b,_c) for(int _var=_a;_var<=_b;_var+=_c)
#define frr(_var,_a,_b,_c) for(int _var=_a;_var>=_b;_var-=_c)
#define int ll

int book[5]={0,2,3,5,7};
int book2[7]={0,6,10,14,15,21,35};
int book3[5]={0,30,42,70,105};
int book4[2]={0,210};

int calc(int num)
{
    int ans=num-1;
    fo(i,1,4)
    {
        ans-=(num/book[i]);
    }
    fo(i,1,6)
    {
        ans+=(num/book2[i]);
    }
    fo(i,1,4)
    {
        ans-=(num/book3[i]);
    }
    fo(i,1,1)
    {
        ans+=(num/book4[i]);
    }
    return ans;
}

void init()
{
    
    return ;
}

void solve()
{
    init();
    int l,r;
    cin>>l>>r;
    cout<<calc(r)-calc(l-1)<<endl;
    // putchar('\n');
    return ;
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("CF2125C.in","r",stdin);
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
