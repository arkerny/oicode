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

struct node
{
    int a,b,d,s;
}arr[200010];
int n,k;

bool cmp(node _tmp1,node _tmp2)
{
    return _tmp1.b<_tmp2.b;
}

int calc_val(int a,int b,int c,int d)
{
    int tmp_arr[5];
    tmp_arr[1]=a;
    tmp_arr[2]=b;
    tmp_arr[3]=c;
    tmp_arr[4]=d;
    sort(tmp_arr+1,tmp_arr+1);
    return tmp_arr[4]+tmp_arr[3]-tmp_arr[2]-tmp_arr[1];
}

void init()
{
    
    return ;
}

void solve()
{
    init();
    cin>>n>>k;
    int ans=0;
    fo(i,1,n)
    {
        cin>>arr[i].a;
    }
    fo(i,1,n)
    {
        cin>>arr[i].b;
    }
    fo(i,1,n)
    {
        if(arr[i].b>arr[i].a)
        {
            swap(arr[i].a,arr[i].b);
        }
    }
    fo(i,1,n)
    {
        arr[i].d=abs(arr[i].a-arr[i].b);
        ans+=arr[i].d;
        arr[i].s=arr[i].a+arr[i].b;
    }
    sort(arr+1,arr+n+1,cmp);
    int min_cost=10000000000;
    fo(i,2,n)
    {
        int val=arr[i].b-arr[i-1].a;
        min_cost=min(min_cost,max(int(0),val));
    }
    cout<<ans+2*min_cost;

    putchar('\n');
    return ;
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("CF2127C.in","r",stdin);
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
