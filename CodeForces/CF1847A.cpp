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

int n,k;
int a[100010],t[100010];
ll ans;

// struct node 
// {
//     int val,right;
// }t[1000010];

// bool cmp(node tmp1,node tmp2)
// {
//     return tmp.val>tmp2.val;
// }

void solve()
{
    ans=0;
    scanf("%d%d",&n,&k);
    fo(i,1,n)
    {
        scanf("%d",&a[i]);
    }
    a[n+1]=a[n];
    fo(i,1,n)
    {
        t[i]=abs(a[i]-a[i+1]);//+abs(a[i]-a[i-1]);
    }
    fo(i,1,n)
    {
        ans+=t[i];
    }
    sort(t+1,t+n+1);//,cmp);
    reverse(t+1,t+n+1);
    fo(i,1,k-1)
    {
        ans-=t[i];
    }
    printf("%d",ans);
    putchar('\n');
    return ;
}

int main()
{
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    int T;
    scanf("%d",&T);
    while(T--)
    {
        solve();
    }
    return 0;
}
