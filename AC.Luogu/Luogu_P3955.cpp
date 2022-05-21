#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define il inline

#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define fo(v,a,b) for(ll v=a;v<=b;v++)
#define fr(v,a,b) for(ll v=a;v>=b;v--)

#define foo(v,a,b,c) for(ll v=a;v<=b;v+=c)
#define frr(v,a,b,c) for(ll v=a;v>=b;v-=c)

#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

ll n,q,book[1010],len,num;
ll p[10]={
    1,
    10,
    100,
    1000,
    10000,
    100000,
    1000000,
    10000000,
    100000000,
    1000000000
    };
ll f(ll len,ll num)
{
    ll flag=0;
    fo(i,1,n)
    {
        if(book[i]%(p[len])==num)
        {
            flag=book[i];
        }
    }
    if(flag==0)
    {
        flag=-1;
    }
    return flag;
}
bool cmp(ll a,ll b)
{
    return a>b;
}
int main()
{
    cin>>n>>q;
    fo(i,1,n)
    {
        cin>>book[i];
    }
    sort(book+1,book+n+1,cmp);
    fo(i,1,q)
    {
        cin>>len>>num;
        cout<<f(len,num)<<endl;
    }
    
    return 0;
}