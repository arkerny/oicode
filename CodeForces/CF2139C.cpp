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

int x,k;

void init()
{
    
    return ;
}

void solve()
{
    init();
    cin>>k>>x;

    int a=1LL<<k;

    if(x==a)
    {
        cout<<0<<endl;
        cout<<endl;
        return;
    }

    int a_now=x;
    int b_now=(1LL<<(k+1))-x;
    vector<int> op;

    while(a_now!=a)
    {
        if(a_now<b_now)
        {
            op.push_back(1);
            int a_new=a_now*2;
            int b_new=b_now-a_now;
            a_now=a_new;
            b_now=b_new;
        }
        else
        {
            op.push_back(2);
            int a_new=a_now-b_now;
            int b_new=b_now*2;
            a_now=a_new;
            b_now=b_new;
        }
    }

    cout<<op.size()<<endl;
    fr(i,op.size()-1,0)
    {
        cout<<op[i]<<' ';
    }
    putchar('\n');
    return ;
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("CF2139C.in","r",stdin);
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
