#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define lowbit(_x) (_x&-_x)
#define fo(_var,_a,_b) for(int _var=_a;_var<=_b;_var++)
#define fr(_var,_a,_b) for(int _var=_a;_var>=_b;_var--)
#define foo(_var,_a,_b,_c) for(int _var=_a;_var<=_b;_var+=_c)
#define frr(_var,_a,_b,_c) for(int _var=_a;_var>=_b;_var-=_c)

int prime[] = {2, 4, 8, 16, 3, 9, 27, 5, 25, 7, 11, 13, 17, 19, 23, 29};
int prime_cnt = 16;

struct DSU //并查集板子，路径压缩，构造函数DSU(n)
{
    vector<int> fa;
    DSU(int n){fa.resize(n+1); iota(fa.begin(),fa.end(),0);}
    int find(int x){if(fa[x]==x){return x;} return fa[x]=find(fa[x]);}
    void unite(int x,int y){int rootX=find(x),rootY=find(y); if(rootX!=rootY){fa[rootX]=rootY;}}
};

void solve()
{
    int n,m,q;
    cin>>n>>m>>q;
    vector<DSU> a;
    fo(i,1,31)
    {
        a.emplace_back(n);
    }
    fo(i,1,m)
    {
        int x,y,g;
        cin>>x>>y>>g;
        fo(j,1,g)
        {
            if(g%j==0)
            {
                a[j].unite(x,y);
            }
        }
    }
    fo(i,1,q)
    {
        int x,y;
        cin>>x>>y;
        int ans=1;
        if (a[3].find(x) == a[3].find(y)) ans *= 16;
        else if (a[2].find(x) == a[2].find(y)) ans *= 8;
        else if (a[1].find(x) == a[1].find(y)) ans *= 4;
        else if (a[0].find(x) == a[0].find(y)) ans *= 2;
        if (a[6].find(x) == a[6].find(y)) ans *= 27;
        else if (a[5].find(x) == a[5].find(y)) ans *= 9;
        else if (a[4].find(x) == a[4].find(y)) ans *= 3;
        if (a[8].find(x) == a[8].find(y)) ans *= 25;
        else if (a[7].find(x) == a[7].find(y)) ans *= 5;
        for(int j = 9; j < prime_cnt; j++)
        {
            if(a[j].find(x)==a[j].find(y))
            {
                ans*=prime[j];
            }
        }
        cout<<ans<<"\n";
    }
}

signed main()
{
    int T;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}