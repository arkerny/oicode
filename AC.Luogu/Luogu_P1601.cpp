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

bool big_num(string tmp1,string tmp2)
{
    return tmp1.size()<tmp2.size()||tmp1.size()==tmp2.size()&&tmp1<tmp2;
}
il string Plus(string tmp1,string tmp2)
{
    ll len=min(tmp1.length(),tmp2.length()),r=0;
    string Answer="";
    if(big_num(tmp1,tmp2))
    {
        swap(tmp1,tmp2);
    }
    reverse(tmp1.begin(),tmp1.end());
    reverse(tmp2.begin(),tmp2.end());
    fo(i,0,len-1)
    {
        if(tmp1[i]-'0'+tmp2[i]-'0'+r>=10)
        {
            Answer+=(tmp1[i]+tmp2[i]-'0'-'0'+r)%10+'0';
            r=(tmp1[i]+tmp2[i]-'0'-'0'+r)/10;
        }
        else
        {
            Answer+=(tmp1[i]+tmp2[i]+r-'0'-'0')+'0';
            r=0;
        }
    }
    if(tmp1.length()!=tmp2.length())
    {
        fo(i,len,tmp1.length()-1)
        {
            if(tmp1[i]-'0'+r>=10)
            {
                Answer+=(tmp1[i]+r-'0')%10+'0';
                r=(tmp1[i]+r-'0')/10;
            }
            else
            {
                Answer+=(tmp1[i]+r-'0')+'0';
                r=0;
            }
        }
    }
    if(r>0)
    {
        Answer+='0'+r;
    }
    reverse(Answer.begin(),Answer.end());
    return Answer;
}
string a,b;

int main()
{
    
    cin>>a>>b;
    cout<<Plus(a,b);
    
    return 0;
}