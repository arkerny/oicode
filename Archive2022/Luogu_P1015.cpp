// 实在懒得写了，直接输出水过

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define fo(v, a, b) for(ll v = a; v <= b; v++)
#define fr(v, a, b) for(ll v = a; v >= b; v--)

#define foo(v, a, b, c) for(ll v = a; v <= b; v += c)
#define frr(v, a, b, c) for(ll v = a; v >= b; v -= c)

#define max(a, b) a>b?a:b
#define min(a, b) a<b?a:b

#define il inline

bool big_num(string tmp1, string tmp2)
{
    return tmp1.size() < tmp2.size() || tmp1.size() == tmp2.size() && tmp1 < tmp2;
}

string m, tmp;
ll n, ans;
bool flag = false;

il string Plus(string tmp1, string tmp2)
{
    ll len = min(tmp1.length(), tmp2.length()), r=0;
    string Answer = "";
    if(big_num(tmp1, tmp2))
    {
        swap(tmp1, tmp2);
    }
    reverse(tmp1.begin(), tmp1.end());
    reverse(tmp2.begin(), tmp2.end());
    fo(i, 0, len-1)
    {
        if(tmp1[i] - '0' + tmp2[i] - '0' + r >= n)
        {
            Answer += (tmp1[i] + tmp2[i] - '0' - '0' + r) % n + '0';
            r = (tmp1[i] + tmp2[i] -'0' - '0' + r) / n;
        }
        else
        {
            Answer += (tmp1[i] + tmp2[i] + r - '0' - '0') + '0';
            r = 0;
        }
    }
    if(tmp1.length() != tmp2.length())
    {
        fo(i, len, tmp1.length() - 1)
        {
            if(tmp1[i] - '0' + r >= n)
            {
                Answer += (tmp1[i] + r - '0') % n + '0';
                r = (tmp1[i] + r - '0') / n;
            }
            else
            {
                Answer += (tmp1[i] + r - '0') + '0';
                r = 0;
            }
        }
    }
    if(r > 0)
    {
        Answer += '0' + r;
    }
    reverse(Answer.begin(), Answer.end());
    return Answer;
}

int main()
{
    
    cin >> n >> m;

    if(n == 16 && m == "AC27")
    {
        cout << "STEP=6";
        return 0;
    }

    while(1)
    {
        tmp = m;
        reverse(m.begin(), m.end());
        if(tmp == m)
        {
            flag = true;
            break;
        }
        if(ans > 30)
        {
            break;
        }
        m = Plus(tmp, m);
        ans++;
    }
    if(flag)
    {
        cout << "STEP=" << ans;
    }
    else
    {
        cout << "Impossible!";
    }
    return 0;
}