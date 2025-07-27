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
ll pre[100010],suf[100010],lcm11[100010],new_pre[100010],new_suf[100010];

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
        cin>>pre[i];
    }
    fo(i,1,n)
    {
        cin>>suf[i];
    }
    fo(i,1,n)
    {
        lcm11[i]=suf[i]/__gcd(suf[i],pre[i])*pre[i];
    }
    new_pre[1]=lcm11[1];
    fo(i,2,n)
    {
        new_pre[i]=__gcd(new_pre[i-1],lcm11[i]);
    }
    new_suf[n]=lcm11[n];
    fr(i,n-1,1)
    {
        new_suf[i]=__gcd(new_suf[i+1],lcm11[i]);
    }
    bool flag=true;

    fo(i,1,n)
    {
        if(suf[i]!=new_suf[i]||pre[i]!=new_pre[i])
        {
            flag=false;
        }
    }

    cout<<(flag?"YES\n":"NO\n");

    


    // putchar('\n');
    return ;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("1.in","r",stdin);
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
