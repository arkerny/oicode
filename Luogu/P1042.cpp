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

ll l,r,m,len;
bool str[62510];
char t;

bool check11(ll l,ll r)
{
    if((l>=11||r>=11)&&abs(l-r)>=2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

bool check21(ll l,ll r)
{
    if((l>=21||r>=21)&&abs(l-r)>=2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    t=0;
    for(ll i=1;t!='E';)
    {
        t=getchar();
        if(t=='W')
        {
            str[i]=true;
            len++;
            i++;
        }
        if(t=='L')
        {
            str[i]=false;
            len++;
            i++;
        }
    }

    fo(i,1,len)
    {
        if(str[i]==true)
        {
            l++;
        }
        else
        {
            r++;
        }
        if(check11(l,r))
        {
            cout<<l<<':'<<r<<endl;
            l=0,r=0;
        }
    }
    cout<<l<<':'<<r<<endl<<endl;
    l=0,r=0;
    fo(i,1,len)
    {
        if(str[i]==true)
        {
            l++;
        }
        else
        {
            r++;
        }
        if(check21(l,r))
        {
            cout<<l<<':'<<r<<endl;
            l=0,r=0;
        }
    }
    cout<<l<<':'<<r<<endl;
    return 0;
}