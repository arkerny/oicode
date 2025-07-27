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

int n;
ull my_pow[20];
bool dp[1<<18]={};

void init()
{
    
    my_pow[0]=1;
    dp[0]=true;
    fo(i,1,18)
    {
        my_pow[i]=2*my_pow[i-1];
    }
    return ;
}



void solve()
{
    init();
    string str;
    cin>>n>>str;
    fo(i,1,my_pow[n])
    {
        dp[i]=false;
    }
    fo(i,0,my_pow[n]-1)
    {
        if(dp[i]==false)
        {
            continue;
        }
        else
        {
            fo(j,0,n-1)
            {
                if((i>>j)&1)
                {
                    continue;
                }
                else
                {
                    ull now=i+(1<<j);
                    if(str[now-1]=='0')
                    {
                        dp[now]=true;
                    }
                }
            }
        }
    }
    cout<<(dp[(1<<n)-1]?"Yes\n":"No\n");
    // putchar('\n');
    return ;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("C.in","r",stdin);
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
