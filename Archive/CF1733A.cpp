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
#define clr(_arr,_val) memset(_arr,_val,sizeof(_arr));

struct node
{
    int p[110],cnt;
}f[110];

int n,k;
int a[110];

void init()
{
    fo(i,0,100)
    {
        f[i].cnt=0;
        clr(f[i].p,0);
    }
    return ;
}

bool cmp(int _tmp1,int _tmp2)
{
    return _tmp1>_tmp2;
}

void solve()
{
    ll ans=0;
    scanf("%d%d",&n,&k);
    fo(i,1,n)
    {
        scanf("%d",&a[i]);
    }
    fo(i,1,n-k+1)
    {
        ll sum=0;
        init();
        fo(j,1,i-1)
        {
            f[j%k].cnt++;
            f[j%k].p[f[j%k].cnt]=a[j];
        }
        fo(j,i+k,n)
        {
            f[j%k].cnt++;
            f[j%k].p[f[j%k].cnt]=a[j];
        }
        fo(j,0,100)
        {
            sort(f[j].p+1,f[j].p+f[j].cnt+1,cmp);
        }
        fo(j,i,i+k-1)
        {
            if(a[j]<f[j%k].p[1])
            {
                sum+=f[j%k].p[1];
                f[j%k].p[1]=a[j];
                sort(f[j%k].p+1,f[j%k].p+f[j%k].cnt+1,cmp);
            }
            else
            {
                sum+=a[j];
            }
        }
        ans=max(sum,ans);
    }
    printf("%lld\n",ans);
    return ;
}

int main()
{
    // freopen("CF1733A.in","r",stdin);
    int T;
    scanf("%d",&T);
    while(T--)
    {
        solve();
    }
    return 0;
}
