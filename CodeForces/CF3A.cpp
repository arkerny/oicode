#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
string s1,s2;
int main()
{
    cin>>s1>>s2;
    ll x1=s1[0]-'a'+1,y1=s1[1]-'0',x2=s2[0]-'a'+1,y2=s2[1]-'0';
    ll dis=max(abs(x1-x2),abs(y1-y2));
    cout<<dis<<endl;
    while(dis--)
    {
        if(x1>x2&&y1>y2)
        {
            x1--,y1--;
            cout<<"LD"<<endl;
            continue;
        }
        if(x1>x2&&y1==y2)
        {
            x1--;
            cout<<"L"<<endl;
            continue;
        }
        if(x1>x2&&y1<y2)
        {
            x1--,y1++;
            cout<<"LU"<<endl;
            continue;
        }
        if(x1==x2&&y1>y2)
        {
            y1--;
            cout<<"D"<<endl;
            continue;
        }
        if(x1==x2&&y1<y2)
        {
            y1++;
            cout<<"U"<<endl;
            continue;
        }
        if(x1<x2&&y1>y2)
        {
            x1++,y1--;
            cout<<"RD"<<endl;
            continue;
        }
        if(x1<x2&&y1==y2)
        {
            x1++;
            cout<<"R"<<endl;
            continue;
        }
        if(x1<x2&&y1<y2)
        {
            x1++,y1++;
            cout<<"RU"<<endl;
            continue;
        }
    }
}
