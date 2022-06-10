#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int n,h[1000005],ans=1;
bool flag;

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>h[i];
    }
    if(h[2]>=h[1])
    {
        flag=1;
    }
    for(int i=1;i<=n;i++)
    {
        if(flag==0&&i==n)
        {
            ans++;
            break;
        }
        if(flag==1)
        {
            if(h[i+1]<h[i])
            {
                ans++;
                flag=0;
                continue;
            }
        }
        if(flag==0)
        {
            if(h[i+1]>h[i])
            {
                ans++;
                flag=1;
                continue;
            }
        }
    }
    cout<<ans;
    return 0;
}