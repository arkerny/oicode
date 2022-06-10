#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

ll n,m,a[100010],b[100010];

int main()
{
    
    while(cin>>n>>m,n!=0&&m!=0)
    {
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<=m;i++)
        {
            cin>>b[i];
        }
        sort(a+1,a+n+1);
        sort(b+1,b+m+1);
        int j=1,ans=0;
        for(int i=1;i<=m;i++)
        {
            if(b[i]>=a[j])
            {
                j++;
                ans+=b[i];
                if(j==n+1)
                {
                    break;
                }
            }
        }
        if(j<=n)
        {
            cout<<"Loowater is doomed!"<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }

    return 0;
}
