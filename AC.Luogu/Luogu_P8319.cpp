#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

bool f[5000010];
ll n;

il void Prime()
{
    for(int i=2;i<=5000000;i++)
    {
        if(f[i])
        {
            continue;
        }
        for(int j=i+i;j<=5000000;j+=i)
        {
            f[j]=1;
        }
    }
    return ;
}

int main()
{
    ll T;
    cin>>T;
    Prime();
    while(T--)
    {
        cin>>n;
        for(int i=n;i;i--)
        {
            if(!f[i])
            {
                cout<<i<<endl;
                break; 
            }
        }
    }

    return 0;
}
