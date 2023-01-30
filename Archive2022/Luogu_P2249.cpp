#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int n,m,a[1000010],q;


int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=m;i++)
    {
        scanf("%d",&q);
        int ans=lower_bound(a+1,a+n+1,q)-a;
        if(q!=a[ans])
        {
            printf("-1 ");
        }
        else
        {
            printf("%d ",ans);
        }
    }
    return 0;
}
