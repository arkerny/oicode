#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define lowbit(_x) (_x&-_x)
#define fo(_var,_a,_b) for(int _var=_a;_var<=_b;_var++)
#define fr(_var,_a,_b) for(int _var=_a;_var>=_b;--_var)
#define foo(_var,_a,_b,_c) for(int _var=_a;_var<=_b;_var+=_c)
#define frr(_var,_a,_b,_c) for(int _var=_a;_var>=_b;_var-=_c)
#define int ll

int n,k;

int MEX(const vector<int>& arr)
{
    vector<bool> vis(arr.size()+1,false);
    for(int x:arr)
    {
        if(x>=0&&x<=arr.size())
        {
            vis[x]=true;
        }
    }
    int mex=0;
    while(mex<=arr.size()&&vis[mex])
    {
        mex++;
    }
    return mex;
}

vector<int> fun(const vector<int>& arr)
{
    vector<int> cnt(n+1,0);
    for(int x:arr)
    {
        cnt[x]++;
    }
    int M=MEX(arr);
    vector<int> ret(n);
    fo(i,0,n-1)
    {
        if(cnt[arr[i]]>1||arr[i]>=M)
        {
            ret[i]=M;
        }
        else
        {
            ret[i]=arr[i];
        }
    }
    return ret;
}

void solve()
{
    cin>>n>>k;
    vector<int> a(n);
    vector<int> aa(n);
    fo(i,0,n-1)
    {
        cin>>a[i];
        aa[i]=a[i];
    }

    sort(aa.begin(),aa.end());
    bool flag=true;
    fo(i,0,n-1)
    {
        if(aa[i]!=i)
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        int sum=0;
        for(int x:a)
        {
            sum+=x;
        }
        cout<<sum<<endl;
        return;
    }

    vector<int> a1=fun(a);
    int sum1=0;
    for(int x:a1)
    {
        sum1+=x;
    }
    if(k==1)
    {
        cout<<sum1<<endl;
        return;
    }
    vector<int> a2=fun(a1);
    int sum2=0;
    for(int x:a2)
    {
        sum2+=x;
    }
    if(k==2)
    {
        cout<<sum2<<endl;
        return;
    }

    vector<int> aa1=a1;
    sort(aa1.begin(),aa1.end());
    vector<int> aa2=a2;
    sort(aa2.begin(),aa2.end());
    if(aa1==aa2)
    {
        cout<<sum1<<endl;
        return;
    }
    vector<int> a3=fun(a2);
    int sum3=0;
    for(int x:a3)
    {
        sum3+=x;
    }

    vector<int> aa3=a3;
    sort(aa3.begin(),aa3.end());

    if(aa2==aa3)
    {
        cout<<sum2<<endl;
        return;
    }
    
    if(aa1==aa3)
    {
        if(k%2==1)
        {
            cout<<sum1<<endl;
        }
        else
        {
            cout<<sum2<<endl;
        }
        return;
    }

    if((k-2)%2==0)
    {
        cout << sum2 << endl;
    }
    else
    {
        cout << sum3 << endl;
    }

    return;
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("CF2137E.in","r",stdin);
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