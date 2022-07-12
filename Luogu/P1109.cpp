#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int n,a[51],l,r;
int ans1,ans2,sum;

int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    scanf("%d%d",&l,&r);
    for(int i=1;i<=n;i++)
    {
        if(a[i]<l)
        {
            ans1+=l-a[i];
        }
        else if(a[i]>r)
        {
            ans2+=a[i]-r;
        }
    }
    if(sum>n*r||sum<n*l)
    {
        printf("-1");
        return 0;
    }
    else
    {
        printf("%d",max(ans1,ans2));
        return 0;
    }

    return 0;
}
