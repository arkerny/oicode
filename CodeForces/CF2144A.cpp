#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define lowbit(_x) (_x&-_x)
#define fo(_var,_a,_b) for(int _var=_a;_var<_b;_var++)
#define fr(_var,_a,_b) for(int _var=_a;_var>_b;_var--)
#define foo(_var,_a,_b,_c) for(int _var=_a;_var<_b;_var+=_c)
#define frr(_var,_a,_b,_c) for(int _var=_a;_var>_b;_var-=_c)
#define int ll

int n;
int a[200010];

void init()
{
    
    return ;
}

void solve()
{
    init();
    cin>>n;
    int sum[200010]={};
    fo(i,0,n)
    {
        cin>>a[i];
        sum[i+1]=sum[i]+a[i];
        sum[i+1]%=3;
    }
    fo(l,1,n)
    {
        fo(r,l+1,n)
        {
            int s1=sum[l];
            int s2=(sum[r]-sum[l]+3)%3;
            int s3=(sum[n]-sum[r]+3)%3;
            if((s1==s2&&s2==s3)||(s1!=s2&&s2!=s3&&s1!=s3))
            {
                cout<<l<<" "<<r<<endl;
                return;
            }
        }
    }
    cout<<"0 0\n";
    

    // putchar('\n');
    return ;
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("CF2144A.in","r",stdin);
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
