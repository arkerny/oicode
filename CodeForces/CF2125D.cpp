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

int mod=998244353;
int d[200010];

int qpow(int a,int n)
{
    int ret=1;
    while(n)
    {
        if(n&1)
        {
            ret=ret*a%mod;
        }
        a=a*a%mod;
        n>>=1;
    }
    return ret;
}

int inv(int num)
{
    return qpow(num,mod-2);
}

struct node
{
    int l,r,p,q,qaq;
}a[200010];

void solve()
{
    int n,m;
    cin>>n>>m;

    fo(i,0,m+1)
    {
        d[i]=1;
    }

    fo(i,1,n)
    {
        cin>>a[i].l>>a[i].r>>a[i].p>>a[i].q;
        a[i].qaq=a[i].q-a[i].p;
        d[a[i].l]*=a[i].qaq;
        d[a[i].l]*=inv(a[i].q);
        d[a[i].r+1]*=a[i].q;
        d[a[i].r+1]*=inv(a[i].qaq);
    }

    fo(i,1,m)
    {
        d[i]=d[i-1]*d[i]%mod;
    }
    
    fo(i,1,m)
    {
        d[i]=mod+1-d[i];
    }

    fo(i,1,m)
    {
        d[i]=d[i-1]*d[i]%mod;
    }
    cout<<d[m]%mod<<endl;
    

    // putchar('\n');
    return ;
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("CF2125D.in","r",stdin);
    // freopen(".out","w",stdout);
    #endif
    int T;
    T=1;
    while(T--)
    {
        solve();
    }
    return 0;
}
