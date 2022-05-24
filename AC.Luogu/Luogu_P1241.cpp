#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

const int INF = 0x3f3f3f3f;

string s;
stack <int> st;
bool flag[110];

int main()
{

    cin>>s;
    ll len=s.length();
    for(int i=0,tmp;i<len;i++)
	{
		if(s[i]==']')
		{
			if(st.empty())
            {
                continue;
            }
			tmp=st.top();
			if(s[tmp]=='[') 
			{
				flag[tmp]=flag[i]=1;
				st.pop();
			}
		}
		else
        {
            if(s[i]==')')
            {
                if(st.empty())
                {
                    continue;
                }
                tmp=st.top();
                if(s[tmp]=='(') 
                {
                    flag[tmp]=flag[i]=1;
                    st.pop();
                }
            }
            else
            {
                st.push(i);
            }
        }
    }
	for(int i=0;i<len;i++)
	{
		if(flag[i])
        {
            cout<<s[i];
        }
		else
		{
			if(s[i]=='('||s[i]==')')
            {
                cout<<"()";
            }
            else
            {
                cout<<"[]";
            }
		}
	}
    return 0;
}