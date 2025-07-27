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

int n,k,a[100010],ans;

void init()
{
    ans=0;
    return ;
}

void solve()
{
    init();
    cin>>n>>k;
    fo(i,1,n)
    {
        cin>>a[i];
    }
    fo(i,1,n)
    {
        if(a[i]==0)
        {
            bool flag=true;
            fo(j,i,i+k-1)
            {
                if(j>n)
                {
                    flag=false;
                    break;
                }
                if(a[j]==1)
                {
                    flag=false;
                    i=j;
                    break;
                }
            }
            if(flag)
            {
                ans++;
                i=i+k;
            }
        }
    }
    cout<<ans<<endl;
    // putchar('\n');
    return ;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("CF2126B.in","r",stdin);
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
