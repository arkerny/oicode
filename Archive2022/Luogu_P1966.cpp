#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

int a[1000010],tmp[1000010],len;
ll ans;

map <ll,ll> m;

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
            ans=ans%99999997;
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
    cin>>len;
    ll tmp;
    for(int i=1;i<=len;i++)
    {
        cin>>tmp;
        m[tmp]=i;
    }
    for(int i=1;i<=len;i++)
    {
        cin>>tmp;
        a[i]=m[tmp];
        m[tmp]=-1;
    }

    msort(1,len);
    cout<<ans;

    return 0;
}