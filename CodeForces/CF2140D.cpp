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

struct Segment
{
    int l,r,sum;
}a[200010];
int n;

bool cmp(Segment _tmp1,Segment _tmp2)
{
    return _tmp1.sum<_tmp2.sum;
}

void init()
{
    
    return ;
}

void solve()
{
    init();
    cin>>n;
    int sum_l=0,sum_r=0;
    fo(i,1,n)
    {
        cin>>a[i].l>>a[i].r;
        a[i].sum=a[i].l+a[i].r;
        sum_l+=a[i].l;
        sum_r+=a[i].r;
    }
    if(n%2==0)
    {
        int ans=2*sum_r-sum_l;
        sort(a+1,a+n+1,cmp);
        fo(i,1,n/2)
        {
            ans-=a[i].sum;
        }
        cout<<ans<<endl;
    }
    else
    {
        int ans=0;
        sort(a+1,a+n+1,cmp);
        int pre[200010]={0};
        fo(i,1,n)
        {
            pre[i]=pre[i-1]+a[i].sum;
        }
        int mid=n/2;
        fo(i,1,n)
        {
            if(i>mid)
            {
                ans=max(ans,(2*sum_r-sum_l-a[i].r-pre[mid]));
            }
            else
            {
                ans=max(ans,(2*sum_r-sum_l-a[i].r-pre[mid+1]+a[i].sum));
            }
        }
        cout<<ans<<endl;

    }

    // putchar('\n');
    return ;
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("CF2140D.in","r",stdin);
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
