#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

const int INF = 0x3f3f3f3f;

ll n, a[100001];

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    ll m = n;

    for (int i = 1; i <= n; )
    {
        if (a[i] == i)
        {
            i++;
        }
        else
        {
            swap(a[i], a[a[i]]);
            m--;
        }
    }

    cout << (m >= 0 && m % 2 == 0 ? "YES" : "NO");

    return 0;
}