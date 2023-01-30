#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

ll a[1000010],n,ans;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+1+n);
        ll s=a[n/2+1];
        ans=0;
        for(int i=1;i<=n;i++)
        {
            ans=ans+abs(a[i]-s);
        }
        cout<<ans<<endl;
    }


    return 0;
}
