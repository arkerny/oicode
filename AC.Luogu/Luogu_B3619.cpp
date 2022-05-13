#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define il inline
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

const int INF = 0x3f3f3f3f;

char dic[37]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
ll n,base;

stack <char> st;

int main()
{
    cin>>n>>base;
    while(n>base)
    {
        st.push(dic[n%base]);
        n/=base;
    }
    st.push(dic[n]);
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
    return 0;
}