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

struct DSU //并查集板子，路径压缩，构造函数DSU(n)
{
    vector<int> fa;
    DSU(int n){fa.resize(n+1); iota(fa.begin(),fa.end(),0);}
    int find(int x){if(fa[x]==x){return x;} return fa[x]=find(fa[x]);}
    void unite(int x,int y){int rootX=find(x),rootY=find(y); if(rootX!=rootY){fa[rootX]=rootY;}}
};