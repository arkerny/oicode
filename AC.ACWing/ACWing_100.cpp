#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

ll n,p,q,a[100010];

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=2;i<=n;i++)
    {
        ll c=a[i]-a[i-1];
        if(c>0)
        {
            p+=c;
        }
        else
        {
            q-=c;
        }
    }
    ll ans1=max(p,q);
    ll ans2=abs(p-q)+1;
    cout<<ans1<<endl<<ans2;
    return 0;
}
