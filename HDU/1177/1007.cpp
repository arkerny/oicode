#include <iostream>
#include <vector>
#include <string>
#include <numeric>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<int> prefix_sum(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        prefix_sum[i + 1] = prefix_sum[i] + (s[i] - '0');
    }

    if (prefix_sum[n] < k) {
        cout << -1 << endl;
        return;
    }

    int left = 1, right = n + 1;
    int ans = n + 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        long long required_len = (long long)mid * k;

        if (required_len > n) {
            right = mid - 1;
            continue;
        }

        if (prefix_sum[required_len] >= k) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << ans << endl;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("1007.in","r",stdin);
    // freopen(".out","w",stdout);
    #endif

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
