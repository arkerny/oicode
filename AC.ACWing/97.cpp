#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
ll a,b;

long long binpow(long long a,long long b,long long m)
{
    a%=m;
    long long res=1;
    while(b>0)
    {
        if(b&1)
        {
            res=res*a%m;
        }
        a=a*a%m;
        b>>=1;
    }
    return res%m;
}

long long sum(ll p,ll c)
{
    if(c==0)
    {
        return 1;
    }
    if(c%2==1)
    {
        return ((1+binpow(p,(c+1)>>1,9901))*sum(p,(c-1)>>1))%9901;
    }
    else
    {
        return ((1+binpow(p,c>>1,9901))*sum(p,(c>>1)-1)+binpow(p,c,9901))%9901;
    }
}

int main()
{
    cin>>a>>b;
    ll ans=1;
    for(int i=2;i<=a;i++)
    {
        int s=0;
        while(a%i==0)
        {
            s++;
            a/=i;
        }
        if(s)
        {
            ans=ans*sum(i,s*b)%9901;
        }
    }

    if(a==0)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<ans<<endl;
    }

    return 0;
}
