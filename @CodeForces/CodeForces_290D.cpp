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
ll n;

string lowwers(string str)
{
    ll len=str.size();
    fo(i,0,len-1)
    {
        str[i]=(str[i]>='A'&&str[i]<='Z')?str[i]+('a'-'A'):str[i];
    }
    return str;
}

int main()
{
    
    cin>>str>>n;
    n+=96;
    char p=n;
    str=lowwers(str);
    fo(i,0,str.length()-1)
    {
        if(str[i]<=p)
        {
            str[i]=str[i]-32;
        }
    }
    cout<<str;
    return 0;
}