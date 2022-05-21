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

const int MAXN=5010;
const int MAXM=200010;

ll f[MAXN],n,m,sum,edge_num;

struct Edge
{
    ll s,e,w;
}edge[MAXM];

void init(int n)
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

bool cmp(Edge t1,Edge t2)
{
    if(t1.w<t2.w)
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
    // freopen("1.in","r",stdin);
    // freopen("1.out","w",stdout);
    cin>>n>>m;
    fo(i,1,m)
    {
        cin>>edge[i].s>>edge[i].e>>edge[i].w;
    }
    sort(edge+1,edge+m+1,cmp);
    init(n);
    fo(i,1,m)
    {
        if(edge_num==n-1)
        {
            cout<<sum;
            return 0;
        }
        else
        {
            if(find(edge[i].s)!=find(edge[i].e))
            {
                sum+=edge[i].w;
                merge(edge[i].s,edge[i].e);
                edge_num++;
            }
        }
    }
    cout<<"orz";
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}