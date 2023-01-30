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

const int MAXN=10000;

ll f[MAXN],n,m,a1,a2,p;

void init(ll n)
{
    fo(i,1,n)
    {
        f[i]=i;
    }
}

ll find(ll k)
{
    if(f[k]==k)
    {
        return k;
    }
    else
    {
        return f[k]=find(f[k]);
    }
}

void merge(ll x,ll y)
{
    ll t1,t2;
    t1=find(x);
    t2=find(y);
    if(t1!=t2)
    {
        f[t2]=t1;
    }
    return ;
}

int main()
{
    // freopen("1.in","r",stdin);
    // freopen("1.out","w",stdout);
    cin>>n>>m>>p;
    init(n);
    fo(i,1,m)
    {
        cin>>a1>>a2;
        merge(a1,a2);
    }
    fo(i,1,p)
    {
        cin>>a1>>a2;
        if(find(a1)==find(a2))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}
