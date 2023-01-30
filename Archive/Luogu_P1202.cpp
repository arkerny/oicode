#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

const int INF = 0x3f3f3f3f;

int n;
int s = 1900, e, flag;
ll sum, ss = 365, ans[7], t;
ll book[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

int main()
{
    cin >> n;
    for (int i = s; i <= s + n -1; i++)
    {
        flag = 0;
        if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
        {
            flag = 1;
        }
        
        for (int j = 1; j <= 12; j++)
        {
            for (int k = 1; k <= book[flag][j]; k++)
            {
                if (k == 13)
                {
                    ans[t % 7]++;
                }
                t++;
            }
        }
    }

    for (int i = 5; i < 7; i++)
    {
        cout << ans[i] << ' ';
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout << ans[i] << ' ';
    }
    return 0;
}