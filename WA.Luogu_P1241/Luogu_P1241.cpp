#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

const int INF = 0x3f3f3f3f;

struct Node
{
    ll v;
    char k;
};

string s;
stack <Node> st;
stack <char> ans;
bool flag[110];

int main()
{

    cin>>s;
    ll l=s.length();
    for(int i=l-1;i>=0;i--)
    {
        if(s[i]==')'||s[i]==']')
        {
            Node tmp;
            tmp.k=s[i];
            tmp.v=i;
            st.push(tmp);
        }
        if(!st.empty())
        {
            if((s[i]=='('&&st.top().k==')')||(s[i]=='['&&st.top().k==']'))
            {
                flag[st.top().v]=1;
                flag[i]=1;
                st.pop();
            }
        }
    }
    for(int i=l-1;i>=0;i--)
    {
        if(flag[i])
        {
            ans.push(s[i]);
        }
        else
        {
            if(s[i]=='('||s[i]==')')
            {
                ans.push(')');
                ans.push('(');
            }
            else
            {
                if(s[i]=='['||s[i]==']')
                {
                    ans.push(']');
                    ans.push('[');
                }
            }
        }
    }
    while(!ans.empty())
    {
        cout<<ans.top();
        ans.pop();
    }
    return 0;
}