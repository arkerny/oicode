#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    ll s,v,t;
    cin>>s>>v;
    if(s%v==0)
    {
        t=s/v;
        t+=9;
    }
    else
    {
        t=s/v;
        t+=10;
    }
    ll h=7,m=59;
    while(t!=0) 
    {
        if(m!=0)
        {
            m--;
        }
        else
        {
            if(h!=0)
            {
                h--;
                m=59;
            }
            else
            {
                h=23;
                m=59;
            }
        }
        t--;
    }
    ll h1,h2,m1,m2;
    h1=h/10;
    h2=h-(10*(h/10)); 
    m1=m/10;
    m2=m-(10*(m/10)); 
    cout<<h1<<h2<<':'<<m1<<m2;
}