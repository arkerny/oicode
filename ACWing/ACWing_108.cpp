#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
ll ans,n,m,a[250010],b[250010],tmp[250010];

void msort(ll a[],ll l,ll r)
{
    if(l==r)
    {
        return ;
    }
    ll mid=(l+r)>>1;
    msort(a,l,mid);
    msort(a,mid+1,r);
    ll i=l,j=mid+1,pos=l;
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
    while(cin>>n)
    {
        ll ok=0,x;
        for(int i=1;i<=n*n;i++)
        {
            cin>>x;
            if(x==0)
            {
                ok=1;
            }
            else
            {
                a[i-ok]=x;
            }
        }
        ok=0;
        for(int i=1;i<=n*n;i++)
        {
            cin>>x;
            if(x==0)
            {
                ok=1;
            }
            else
            {
                b[i-ok]=x;
            }
        }
        ans=0;
        memset(tmp,0,sizeof(tmp));
        msort(a,1,n*n);
        ll ans1=ans;

        memset(tmp,0,sizeof(tmp));
        ans=0;
        msort(b,1,n*n);
        ll ans2=ans;

        if(abs(ans1-ans2)%2==0)
        {
            cout<<"TAK"<<endl;
        }
        else
        {
            cout<<"NIE"<<endl;
        }
    }
    return 0;
}