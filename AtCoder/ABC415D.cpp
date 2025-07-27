#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define lowbit(_x) (_x&-_x)
#define fo(_var,_a,_b) for(int _var=_a;_var<=_b;_var++)
#define fr(_var,_a,_b) for(int _var=_a;_var>=_b;_var--)
#define foo(_var,_a,_b,_c) for(int _var=_a;_var<=_b;_var+=_c)
#define frr(_var,_a,_b,_c) for(int _var=_a;_var>=_b;_var-=_c)
#define ll ull
ll n,m;


struct node
{
    ll a,b;
    ll d;
}t[200010];

bool cmp(node _tmp1,node _tmp2)
{
    if(_tmp1.b==_tmp2.b)
    {
        return _tmp1.d>_tmp2.d;
    }
    return _tmp1.b<_tmp2.b;
}

void init()
{
    
    return ;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("D.in","r",stdin);
    // freopen(".out","w",stdout);
    #endif

    cin>>n>>m;
    fo(i,1,m)
    {
        cin>>t[i].a>>t[i].b;
        t[i].d=t[i].a-t[i].b;
    }

    sort(t+1,t+m+1,cmp);
    ll ans=0;
    fo(i,1,m)
    {
        if(n>=t[i].a)
        {
            ans+=((n-t[i].a)/t[i].d+1)*t[i].a;
            n=n-((n-t[i].a)/t[i].d+1)*t[i].d;
        }
        
    }
    cout<<ans;

    return 0;
}

