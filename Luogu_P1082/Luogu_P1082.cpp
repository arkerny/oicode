#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

const int INF = 0x3f3f3f3f;

ll a, b;

int main()
{
    cin >> a >> b;
    for(ll i = 1; i <= 2000000000; i++)
    {
        if(a * i % b == 1)
        {
            cout << i;
            return 0;
        }
    }

    return 0;
}