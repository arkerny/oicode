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
int a[200010],b[200010],t[200010],tag[200010],now[200010],cnt[200010],tmp=1;

void init()
{
    tmp=1;
    fo(i,1,n)
    {
        t[i]=0;
        now[i]=0;
        cnt[i]=0;
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
        t[b[i]]++;
    }
    fo(i,1,n)
    {
        if(t[i]!=0)
        {
            if(t[i]%i==0)
            {
                tag[i]=t[i]/i;
            }
            else
            {
                cout<<"-1"<<endl;
                return ;
            }
        }
    }
    fo(i,1,n)
    {
        if(cnt[b[i]]%b[i]==0)
        {
            now[b[i]]=tmp;
            cnt[b[i]]=0;
            tmp++;
        }
        cnt[b[i]]++;
        cout<<now[b[i]]<<' ';
    }
    putchar('\n');
    return ;
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("CF2137D.in","r",stdin);
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
