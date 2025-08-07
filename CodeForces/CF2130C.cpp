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
#define int ll

struct node
{
    int a,b,len,id;
}arr[3010];
int n,maxx;

vector<int>ans;

int f[6010];
bool d[6010]; 

void init(ll n)
{
    fo(i,1,n)
    {
        f[i]=i;
        d[i]=0;
    }
    ans.clear();
    maxx=0;
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

bool cmp(node _tmp1,node _tmp2)
{
    return _tmp1.len > _tmp2.len;
}

void solve()
{
    cin>>n;
    init(2*n);
    fo(i,1,n)
    {
        cin>>arr[i].a>>arr[i].b;
        arr[i].len=arr[i].b-arr[i].a;
        arr[i].id=i;
    }
    sort(arr+1,arr+n+1,cmp);
    
    fo(i,1,n)
    {
        if(find(arr[i].a)==find(arr[i].b))
        {
            continue;
        }
        int tmp=0;
        fo(j,arr[i].a,arr[i].b-1)
        {
            if(!d[j])
            {
                tmp++;
            }
        }
        if(tmp)
        {
            merge(arr[i].a,arr[i].b);
            ans.push_back(arr[i].id);
            fo(j,arr[i].a,arr[i].b-1)
            {
                d[j]=true;
            }
        }
    }

    cout<<ans.size()<<endl;
    fo(i,1,ans.size())
    {
        cout<<ans[i-1]<<' ';
    }

    putchar('\n');
    return ;
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("CF2130C.in","r",stdin);
    // freopen(".out","w",stdout);
    #endif
    int T;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
