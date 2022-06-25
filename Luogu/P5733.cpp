#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

ll n, a[3000010], ans[3000010];
stack <ll> s;

int main()
{
    IOS
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = n; i >= 1; i--)
    {
        while(!s.empty() && a[s.top()] <= a[i])
        {
            s.pop();
        }
        ans[i] = s.empty() ? 0 : s.top();
        s.push(i);
    }
    for(int i = 1; i <= n; i++)
    {
        cout << ans[i] << ' ';
    }
    return 0;
}