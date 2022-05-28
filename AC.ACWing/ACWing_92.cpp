#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

ll n;

void dfs(ll depth,ll pos)
{
    if(depth==n)
    {
        for(int i=0;i<n;i++)
        {
            if(pos>>i&1)
            {
                cout<<i+1<<' ';
            }
        }
        cout<<endl;
        return ;
    }
    dfs(depth+1,pos);
    dfs(depth+1,pos|(1<<depth));
}

int main()
{
    cin>>n;
    dfs(0,0);

    return 0;
}
