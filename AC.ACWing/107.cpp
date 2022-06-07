#include<bits/stdc++.h>
#pragma GCC optimize (ofast)
#pragma G++ optimize (ofast)
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

ll a[1000010],n,b[1000010],ans;

void msort(ll l,ll r)     //归并排序求逆序对
{
    if(l==r)
    {
        return ;
    }
    ll mid=(l+r)>>1;
    msort(l,mid);
    msort(mid+1,r);
    ll i=l,j=mid+1;
    for(ll k=l;k<=r;k++)
    {
        if(j>r||i<=mid&&a[i]<=a[j])
        {
            b[k]=a[i++];
        }
        else
        {
            ans+=mid-i+1;
            b[k]=a[j++];
        }
    }
    for(ll k=l;k<=r;k++)
    {
        a[k]=b[k];
    }
}

int main()
{
    IOS
    while(1)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        ans=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        msort(1,n);
        cout<<ans<<endl;
    }
    

    return 0;
}
