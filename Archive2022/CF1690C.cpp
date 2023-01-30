#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

ll T;

void slove()
{

    ll n,a[200010],b[200010],ans[200010],now;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    for(int i=1;i<=n;i++)
    {
        ans[i]=b[i]-max(b[i-1],a[i]);
    }
    for(int i=1;i<=n;i++)
    {
        cout<<ans[i]<<' ';
    }
    cout<<endl;
    return ;
}

int main()
{
    IOS
    cin>>T;
    while(T--)
    {
        slove();

    }
    

    return 0;
}
