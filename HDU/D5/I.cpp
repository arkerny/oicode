#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define lowbit(_x) (_x&-_x)
#define fo(_var,_a,_b) for(int _var=_a-1;_var<=_b-1;_var++)
#define fr(_var,_a,_b) for(int _var=_a;_var>=_b;_var--)
#define foo(_var,_a,_b,_c) for(int _var=_a;_var<=_b;_var+=_c)
#define frr(_var,_a,_b,_c) for(int _var=_a;_var>=_b;_var-=_c)

int fa[510];
bool des[510];

int n,m,k;

int find_fa(int x)
{
    if(fa[x]!=x)
    {
        fa[x] = find_fa(fa[x]);
    }
    return fa[x];
}

void merge(int u,int v)
{
    u=find_fa(u);
    v=find_fa(v);
    if(u!=v)
    {
        fa[u]=v;
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    #endif

    cin>>n>>m;

    fo(i,1,n)
    {
        fa[i]=i;
        des[i]=0;
    }

    vector<pair<int, int> > a;

    fo(i,1,m)
    {
        int u,v;
        cin>>u>>v;
        a.push_back(make_pair(u,v));
        merge(u,v);
    }

    int init_cnt=0;
    fo(i,1,n)
    {
        if(find_fa(i)==i)
        {
            init_cnt++;
        }
    }

    int des_cnt=0;
    cin>>k;
    fo(i,1,k)
    {
        int tmp;
        cin>>tmp;
        des[tmp]=1;
        des_cnt++;
        fo(j,1,n)
        {
            fa[j]=j;
        }
        for(auto s:a)
        {
            if(!des[s.first]&&!des[s.second])
            {
                merge(s.first,s.second);
            }
        }
        int cnt_now=0;
        fo(j,1,n)
        {
            if(!des[j]&&find_fa(j)==j)
            {
                cnt_now++;
            }
        }
        if(cnt_now>init_cnt)
        {
            cout<<"Red Alert: City "<<tmp<<" is lost!"<<endl;
        }
        else
        {
            cout<<"City "<<tmp<<" is lost."<<endl;
        }
        init_cnt=cnt_now;
    }

    if(k==n)
    {
        cout<<"Game Over."<<endl;
    }

    return 0;
}
