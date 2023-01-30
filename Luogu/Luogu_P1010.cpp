#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define fo(v,a,b) for(ll v=a;v<=b;v++)
#define fr(v,a,b) for(ll v=a;v>=b;v--)

#define foo(v,a,b,c) for(ll v=a;v<=b;v+=c)
#define frr(v,a,b,c) for(ll v=a;v>=b;v-=c)

#define il inline

ll n;

// 打表
string s[16]={"2(0)","2","2(2)","2(2+2(0))","2(2(2))","2(2(2)+2(0))","2(2(2)+2)","2(2(2)+2+2(0))","2(2(2+2(0)))","2(2(2+2(0))+1)","2(2(2+2(0))+2)","2(2(2+2(0))+2+2(0))","2(2(2+2(0))+2(2))","2(2(2+2(0))+2(2)+2(0))","2(2(2+2(0))+2(2)+2)","2(2(2+2(0))+2(2)+2+2(0))"};

bool temp;

int main()
{
    // freopen("1.in","r",stdin);
    // freopen("1.out","w",stdout);
    
    IOS
    cin>>n;
    fr(i,15,0)
    {
        if(pow(2,i)<=n)
        {
            n-=pow(2,i);
            if(temp)
            {
                cout<<'+';
            }
            cout<<s[i];temp=1;
        }
    }

    // fclose(stdin);
    // fclose(stdout);
    return 0;
}