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

string lowwers(string str)
{
    ll len=str.size();
    fo(i,0,len-1)
    {
        str[i]=(str[i]>=65&&str[i]<=90)?str[i]+32:str[i];
    }
    return str;
}

string inputs()
{
    string temp;
    getline(cin,temp);
    return ' '+lowwers(temp)+' ';
}

string str,q;
ll ans,cnt,r;

int main()
{
    q=inputs();
    str=inputs();
    if(str.find(q)==str.npos)
    {
        cout<<"-1";
        return 0;
    }
    ans=str.find(q);
    while(r<str.length())
    {
        r=str.find(q,r)+q.length()-1;
        cnt++;
        if(str.find(q,r)==str.npos)
        {
            break;
        }
    }
    
    cout<<cnt<<' '<<ans;
    
    return 0;
}