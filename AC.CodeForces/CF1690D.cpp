#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

ll T;

void slove()
{
    ll n,k;
    cin>>n>>k;
    char str[200010];
    ll sum[200010];
    memset(sum,0,sizeof(sum));
    scanf("%s",str+1);

    for(int i=1;i<=n;i++)
    {
        sum[i]=sum[i-1];
        if(str[i]=='W')
        {
            sum[i]++;
        }
    }

    ll ans=0x3fffffff;
    for(int i=1;i<=n-k+1;i++)
    {
        ans=min(ans,sum[i+k-1]-sum[i-1]);
    }

    cout<<ans<<endl;
    return ;
}

int main()
{
    cin>>T;
    while(T--)
    {
        slove();
    }
    

    return 0;
}
