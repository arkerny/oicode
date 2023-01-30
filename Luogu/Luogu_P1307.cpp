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

int main()
{
    
    cin>>str;
    if(str=="0")
    {
        cout<<"0";
        return 0;
    }
    if(str[0]=='-')
    {
        cout<<'-';
        str.erase(0,1);
    }
    reverse(str.begin(),str.end());
    if(str[0]=='0')
    {
        str.erase(0,str.find_first_not_of('0'));
    }
    cout<<str;
    return 0;
}