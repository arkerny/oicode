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

int k,n,a,b,c,d;

void init()
{
    
    return ;
}

void solve()
{
    init();
    cin>>k>>n>>a>>b>>c>>d;
    int ans1_up=c*((k*d)/(c*n)+1);
    int ans1_down=d;

    int ans2_up=a*((k*b)/(a*n)+1);
    int ans2_down=b;

    int s=floor((k*d)/(c*n))+1;
    int ans3_up=k*(s+1);
    int ans3_down=n*s;

    if(ans1_up*ans2_down>ans2_up*ans1_down)
    {
        if(s<=(b*k/(a*n))&&s>=(d*k/(c*n)))
        {
            if(ans3_up*ans1_down<ans1_up*ans3_down)
            {
                printf("%lld/%lld",ans1_up/__gcd(ans1_up,ans1_down),ans1_down/__gcd(ans1_up,ans1_down));
            }
            else
            {
                printf("%lld/%lld",ans3_up/__gcd(ans3_up,ans3_down),ans3_down/__gcd(ans3_up,ans3_down));
            }
        }
        else
        {
            printf("%lld/%lld",ans1_up/__gcd(ans1_up,ans1_down),ans1_down/__gcd(ans1_up,ans1_down));
            
        }
        
    }
    else
    {
        if(s<=(b*k/(a*n))&&s>=(d*k/(c*n)))
        {
            if(ans3_up*ans2_down>ans2_up*ans3_down)
            {
                printf("%lld/%lld",ans3_up/__gcd(ans3_up,ans3_down),ans3_down/__gcd(ans3_up,ans3_down));
            }
            else
            {
                printf("%lld/%lld",ans2_up/__gcd(ans2_up,ans2_down),ans2_down/__gcd(ans2_up,ans2_down));
            }
        }
        else
        {
            printf("%lld/%lld",ans2_up/__gcd(ans2_up,ans2_down),ans2_down/__gcd(ans2_up,ans2_down));
        }
    }

    putchar('\n');
    return ;
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("1006.in","r",stdin);
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