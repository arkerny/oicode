#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define max(a, b) a>b?a:b
#define min(a, b) a<b?a:b

const int INF = 0x3f3f3f3f;

struct node
{
    ll d, s, t;
}M[1000010];

ll n, m;
ll r[1000010];
ll a[1000010];
ll need[1000010];
bool flag;


int main()
{

    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> r[i];
    }
    for(int i = 1; i <= m; i++)
    {
        cin >> M[i].d >> M[i].s >> M[i].t;
        a[M[i].s] += M[i].d;
        a[M[i].t + 1] -= M[i].d;
    }

    for(int i = 1; i <= n; i++)
    {
        need[i] = need[i - 1] + a[i];
    }

    for(int i = 1; i <= n; i++)
    {
        if(need[i] > r[i])
        {
            flag = true;
            for(int j = 1; j <= m; j++)
            {
                if(i >= M[j].s && i <= M[j].t)
                {
                    r[i] -= M[j].d;
                    if(r[i] < 0)
                    {
                        cout << "-1" << endl;
                        cout << j;
                        return 0;
                    }
                }
            }
        }
    }
    if(!flag)
    {
        cout << "0";
    }
    
    return 0;
}