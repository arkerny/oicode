#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

ll n;
vector<ll>a;

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        a.insert(upper_bound(a.begin(),a.end(),x),x);
        if(i%2==1)
        {
            cout<<a[(i-1)/2]<<endl;
        }
    }
    return 0;
}