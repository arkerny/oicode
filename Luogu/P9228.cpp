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

int n,m,k;
int ice[1000010],fire[1000010];
ll ans;

bool cmp(int tmp1,int tmp2)
{
    return tmp1>tmp2;
}

int main()
{
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);

    scanf("%d%d%d",&n,&m,&k);
    fo(i,1,n)
    {
        scanf("%d",&fire[i]);
        ans+=fire[i];
    }
    fo(i,1,m)
    {
        scanf("%d",&ice[i]);
        ans+=ice[i];
    }
    sort(fire+1,fire+n+1,cmp);
    fo(i,1,min(n,m))
    {
        if(fire[i]>k)
        {
            ans+=fire[i];
        }
        else
        {
            ans+=k;
        }
    }
    printf("%lld\n",ans);
    return 0;
}
