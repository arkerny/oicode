#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

const int INF = 0x3f3f3f3f;

ll c[100001], n, m, p1, s1, s2, sum1, sum2, mm = INF, ans;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> c[i];
    }
    cin >> m >> p1 >> s1 >> s2;
    c[p1] += s1;

    for (int i = 1; i <= m-1; i++)
    {
        sum1 += (m-i) * c[i];
    }
    for (int i = m+1; i <= n; i++)
    {
        sum2 += (i-m) * c[i];
    }

    for (int i = 1; i <= m-1; i++)
    {
        sum1 += (m-i) * s2;
        if (abs(sum1 - sum2) < mm)
        {
            mm = abs(sum1 - sum2);
            ans = i;
        }
        sum1 -= (m-i) * s2;
    }
    if (abs(sum1 - sum2) < mm)
    {
        mm = abs(sum1 - sum2);
        ans = m;
    }
    for (int i = m+1; i <= n; i++)
    {
        sum2 += (i-m) * s2;
        if (abs(sum1 - sum2) < mm)
        {
            mm = abs(sum1 - sum2);
            ans = i;
        }
        sum2 -= (i-m) * s2;
    }
    cout << ans;
    return 0;
}