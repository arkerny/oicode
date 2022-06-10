#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

ll n,m;
ll a[20];

int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        a[i]=1;
    }
    do
    {
        for(int i=1;i<=n;i++)
        {
            if(a[i])
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }while(prev_permutation(a+1,a+1+n));
    return 0;
}
