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

int n,s,sum;
int a[100],t[3];

void init()
{
    sum=0;
    fo(i,0,2)
    {
        t[i]=0;
    }
    return ;
}

void solve()
{
    init();
    cin>>n>>s;
    fo(i,1,n)
    {
        cin>>a[i];
        sum+=a[i];
        t[a[i]]++;
    }
    if(sum>s)
    {
        fo(i,1,n)
        {
            cout<<a[i]<<' ';
        }
    }
    else
    {
        if(sum+1==s)
        {
            fo(i,1,t[0])
            {
                cout<<"0 ";
            }
            fo(i,1,t[2])
            {
                cout<<"2 ";
            }
            fo(i,1,t[1])
            {
                cout<<"1 ";
            }
        }
        else
        {
            cout<<"-1";
        }
    }

    putchar('\n');
    return ;
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("CF2130B.in","r",stdin);
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
