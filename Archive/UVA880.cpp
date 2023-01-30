#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

ll n;
int main()
{
    while(cin>>n)
    {
        ll cnt=1,tot=0;
        while(tot+cnt<n)
        {
            tot+=cnt;
            ++cnt;
        }
        printf("%lld/%lld\n",cnt+1-n+tot,n-tot);
    }
    return 0;
}