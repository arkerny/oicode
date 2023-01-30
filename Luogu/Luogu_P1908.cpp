#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int n,a[500010],tmp[500010];

ll ans;

void msort(int l,int r)
{
    if(l==r)
    {
        return ;
    }
    int mid=(l+r)>>1;
    msort(l,mid);
    msort(mid+1,r);
    int i=l,j=mid+1,pos=l;
    while(i<=mid&&j<=r)
    {
        if(a[i]>a[j])
        {
            ans+=mid-i+1;
            tmp[pos++]=a[j++];
        }
        else
        {
            tmp[pos++]=a[i++];
        }
    }
    while(i<=mid)
    {
        tmp[pos++]=a[i++];
    }
    while(j<=r)
    {
        tmp[pos++]=a[j++];
    }
    for(int i=l;i<=r;i++)
    {
        a[i]=tmp[i];
    }
}

int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    msort(1,n);
    printf("%lld",ans);
    return 0;
}
