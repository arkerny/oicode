#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

queue<ll> p1,p2,p3;
ll n,m,q,u,v,t,a[10000010];

int cmp(int a,int b)
{
    return a>b;
}

int calc(ll t)
{
    ll x=-1,a=-1,b=-1,c=-1;
    if(!p1.empty())
    {
        a=p1.front()+t*q;
    }
    if(!p2.empty())
    {
        b=p2.front()+t*q;
    }
    if(!p3.empty())
    {
        c=p3.front()+t*q;
    }
    x=max(a,max(b,c));
    if(x==a)
    {
        p1.pop();
    }
    else if(x==b)
    {
        p2.pop();
    }
    else if(x==c)
    {
        p3.pop();
    }
    return x;
}

int main()
{
    scanf("%lld%lld%lld%lld%lld%lld",&n,&m,&q,&u,&v,&t);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
    }
    sort(a+1,a+1+n,cmp);
    for(int i=1;i<=n;i++)
    {
        p1.push(a[i]);
    }
    for(int i=1;i<=m;i++)
    {
        ll x=calc(i-1);
        if(!(i%t))
        {
            printf("%lld ",x);
        }
        ll now1=x*u/v;
        ll now2=x-now1;
        p2.push(now1-i*q);
        p3.push(now2-i*q);
    }
    putchar('\n');
    for(int i=1;i<=n+m;i++)
    {
        ll x=calc(m);
        if(i%t==0)
        {
            printf("%lld ",x);
        }
    }
    return 0;
}
