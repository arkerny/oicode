#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

ll a[10000010],n,p;

int main()
{
    
    cin>>n>>p;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    ll end=unique(a+1,a+n+1)-a-1;
    if(p>end)
    {
        cout<<"NO RESULT";
        return 0;
    }
    cout<<a[p];

    return 0;
}