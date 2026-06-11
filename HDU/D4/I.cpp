#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define lowbit(_x) (_x&-_x)
#define fo(_var,_a,_b) for(int _var=_a;_var<=_b;_var++)
#define fr(_var,_a,_b) for(int _var=_a;_var>=_b;_var--)
#define foo(_var,_a,_b,_c) for(int _var=_a;_var<=_b;_var+=_c)
#define frr(_var,_a,_b,_c) for(int _var=_a;_var>=_b;_var-=_c)

vector<int> a[10010];
int val[10010],sum[10010],ind[10010];

int is_prime(int t)
{
    fo(i,2,sqrt(t))
    {
        if(t%i==0)
        {
            return 1;
        }
    }
    return 2;
}

int fun(int t)
{
    int res=0;
    while(t)
    {
        res+=(t%10)*(t%10);
        t/=10;
    }
    return res;
}

void DFS(int node, int depth)
{
    val[node] = depth*is_prime(node);
    if(a[node].empty())
    {
        ind[node]=1;
        return ;
    }
    for(auto i : a[node])
    {
        DFS(i,depth+1);
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    #endif

    int l,r;
    cin>>l>>r;
    fo(i,2,10000)
    {
        a[fun(i)].push_back(i);
    }
    DFS(1,0);
    fo(i,1,r)
    {
        sum[i]=sum[i-1]+val[i];
    }
    fo(i,1,r)
    {
        if(a[i].empty())
        {
            continue;
        }
        ind[i]=1;
        for(auto j:a[i])
        {
            if(j >= l && j <= r)
            {
                ind[i]=0;
            }
        }
    }
    if(sum[l]==sum[r])
    {
        cout<<"SAD";
    }
    else
    {
        fo(i,l,r)
        {
            if(ind[i]&&val[i]!=0)
            {
                cout<<i<<" "<<val[i]<<endl;
            }
        }
    }
    return 0;
}
