#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

ll a[1000010],n,ans;

int main()
{
    
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    ll s=a[n/2+1];
    for(int i=1;i<=n;i++)
    {
        ans=ans+abs(a[i]-s);
    }
    cout<<ans;


    return 0;
}
