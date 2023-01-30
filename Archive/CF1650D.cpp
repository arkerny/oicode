#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

ll ans[2010];
int main()
{
	ll T;
	cin>>T;
	while(T--)
    {
        ll n;
        cin>>n;
        deque <ll> q;
        memset(ans,0,sizeof(ans));
        for(int i=1;i<=n;i++)
        {
            ll tmp;
            cin>>tmp;
            q.push_back(tmp);
        }
        for(int i=n;i>=1;i--)
        {
            while(q.back()!=i)
            {
                q.push_back(q.front());
                q.pop_front();
                ans[i]++;
            }
            q.pop_back();
        }
        for(int i=1;i<=n;i++)
        {
            cout<<ans[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}