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

int n,m,k;
struct node
{
    int b[11];
}a[10010];

int sum[10010];

int main()
{
    #ifndef ONLINE_JUDGE
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    #endif

    cin>>n>>k>>m;
    fo(i,1,n)
    {
        fo(j,1,k)
        {
            cin>>a[i].b[j];
        }
        int maxx=0,minn=999;
        fo(j,1,k)
        {
            sum[i]+=a[i].b[j];
            maxx=max(maxx, a[i].b[j]);
            minn=min(minn, a[i].b[j]);
        }
        sum[i]=sum[i]-maxx-minn;
    }
    sort(sum+1,sum+n+1);
    bool flag=false;
    fo(i,n-m+1,n)
    {
        if(flag)
        {
            cout<<' ';
        }
        printf("%.3f", float(sum[i]) / (k-2));
        flag = 1;
    }
    return 0;
}
