#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define lowbit(_x) (_x&-_x)
#define fo(_var,_a,_b) for(int _var=_a;_var<=_b; _var++)
#define fr(_var,_a,_b) for(int _var=_a;_var>=_b; _var--)
#define foo(_var,_a,_b,_c) for(int _var=_a;_var<=_b;_var+=_c)
#define frr(_var,_a,_b,_c) for(int _var=_a;_var>=_b;_var-=_c)
#define int ll

int n;
int a[200010],pos;

void init()
{
    pos=-1;
    return;
}

void solve()
{
    init();
    cin>>n;
    int book[200010]={};
    fo(i,1,n)
    {
        cin>>a[i];
        book[a[i]]++;
    }
    pos=n;
    fo(i,1,n)
    {
        if(a[i]==0)
        {
            while(book[pos]==1)
            {
                pos--;
            }
            a[i]=pos;
            pos--;
        }
    }
    int le=1;
    int ri=n;
    fo(i,1,n)
    {
        if(a[i]==i)
        {
            le++;
        }
        else
        {
            break;
        }
    }
    fr(i,n,1)
    {
        if(a[i]==i)
        {
            ri--;
        }
        else
        {
            break;
        }
    }
    if(le>ri)
    {
        cout<<"0\n";
    }
    else
    {
        cout<<ri-le+1<<endl;
    }

    
    return;
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("CF2144B.in","r",stdin);
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