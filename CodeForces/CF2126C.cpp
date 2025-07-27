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

int n,k,h[100010],dif[100010];

void init()
{
    
    return ;
}

void solve()
{
    init();
    cin>>n>>k;
    fo(i,1,n)
    {
        cin>>h[i];
    }
    int now_at = h[k];
    sort(h+1,h+n+1);
    int st_pos;
    fr(i,n,1)
    {
        if(h[i]==now_at)
        {
            st_pos=i;
        }
    }
    bool flag=true;
    int time = 1;
    fo(i,1,n)
    {
        dif[i]=h[i]-h[i-1];
    }
    fo(i,st_pos+1,n)
    {
        if(now_at-time+1<dif[i])
        {
            flag=false;
            break;
        }
        else
        {
            now_at=h[i];
            time+=dif[i];
        }
    }
    if(now_at!=h[n])
    {
        flag=false;
    }

    cout<<(flag?"YES\n":"NO\n");

    // putchar('\n');
    return ;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("CF2126C.in","r",stdin);
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
