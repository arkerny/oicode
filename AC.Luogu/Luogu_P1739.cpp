#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define fo(v,a,b) for(ll v=a;v<=b;v++)
#define fr(v,a,b) for(ll v=a;v>=b;v--)

#define foo(v,a,b,c) for(ll v=a;v<=b;v+=c)
#define frr(v,a,b,c) for(ll v=a;v>=b;v-=c)

#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

#define il inline

string str;
stack <char> st;
bool flag;

int main()
{
    
    cin>>str;
    fo(i,0,str.length()-2)
    {
        if(str[i]=='@')
        {
            break;
        }
        if(str[i]=='(')
        {
            st.push(str[i]);
        }
        if(str[i]==')')
        {
            if(!st.empty())
            {
                st.pop();
            }
            else
            {
                flag=1;
            }
        }
    }
    if(flag||!st.empty())
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    return 0;
}