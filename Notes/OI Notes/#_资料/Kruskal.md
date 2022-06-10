# **Kruskal**

```
Author:Hakcer_Nick(范朋远)
```

**Kruskal算法**是一种用来查找最小生成树的算法，是贪心算法的应用，**并查集**是Kruskal算法中的关键。

最小生成树的要求是用最少的边的权值和使一个图连通（在本文中只讨论无向图的最小生成树）。

很显然，要想让有$n$个点的图连通，最少需要$n-1$条边，要使权值和最小，则要先选出最小的边，然后选出次小的边，

所以说可以先把一个图的所有边按权值进行排序，然后从小到大来判断，如果一条边的两个顶点已经在一个集合中（祖宗结点相同）即可以理解为图中出现环，不是最小权值和。所以需要检查是否出现环。

**具体解释见下例题AC代码注释：**

## 例题：[洛谷 P3366 [模板] 最小生成树](https://www.luogu.com.cn/problem/P3366)

### **例题AC代码：**

```c++
/*
  所属题目：洛谷 P3366 [模板] 最小生成树
  评测状态：Accepted
  评测分数：100
  用时：394ms
  内存：5.11MB
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

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
    sort(edge+1,edge+m+1,cmp);  //排序
    init(n);
    fo(i,1,m)
    {
        if(edge_num==n-1)  //如果边到了n-1则退出
        {
            cout<<sum;
            return 0;
        }
        else
        {
            if(find(edge[i].s)!=find(edge[i].e))  //判断环
            {
                sum+=edge[i].w;  //统计权值和
                merge(edge[i].s,edge[i].e);  //合并两个集合
                edge_num++;  //统计已经使用边的数量
            }
        }
    }
    cout<<"orz";  //非连通图输出orz
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}
```

