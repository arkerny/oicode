#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

int a[1000010],c[1000010],len;
ll ans;

map <ll,ll> m;

void msort(int b,int e)
{
    if(b==e)
        return;
    int mid=(b+e)/2,i=b,j=mid+1,k=b;
    msort(b,mid),msort(mid+1,e);
    while(i<=mid&&j<=e)
        if(a[i]<=a[j])
            c[k++]=a[i++];
        else
            c[k++]=a[j++],ans+=mid-i+1,ans%=99999997;
    while(i<=mid)
        c[k++]=a[i++];
    while(j<=e)
        c[k++]=a[j++];
    for(int l=b;l<=e;l++)
        a[l]=c[l];
}

int main()
{
    cin>>len;
    ll tmp;
    for(int i=0;i<len;i++)
    {
        cin>>tmp;
        m[tmp]=i;
    }
    for(int i=0;i<len;i++)
    {
        cin>>tmp;
        a[i]=m[tmp];
        m[tmp]=-1;
    }

    msort(0,len-1);
    cout<<ans;


    return 0;
}