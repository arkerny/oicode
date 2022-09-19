根据题意，可得如下结论：

- 每次将当前待交换的数交换到正确的位置时所得的交换次数最小。
- 交换总次数与最小交换次数的差大于0且能被2整除时可做到满足条件。

对于结论的解释：

- 将当前待交换的数交换到它本来应该在的位置时可以保证至少有一个数到达正确的位置。
- 满足最小次数交换后，设剩余数大小为 $k$ ，当且仅当 $k \bmod 2 = 0$ 时才可以满足交换（即两个数来回交换一次消耗两次交换次数）。

代码如下：

``` cpp
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
```
