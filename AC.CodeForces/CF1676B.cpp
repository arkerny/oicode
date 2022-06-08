#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

ll a[1010],n;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        cin>>n;
        ll sum=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        for(int i=2;i<=n;i++)
        {
            sum+=a[i]-a[1];
        }
        cout<<sum<<endl;
    }
    

    return 0;
}
