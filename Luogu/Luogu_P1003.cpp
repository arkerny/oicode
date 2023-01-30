#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int a[10010][4],n,x,y,flag=-1;

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i][0]>>a[i][1]>>a[i][2]>>a[i][3];
        a[i][2]+=a[i][0];
        a[i][3]+=a[i][1];
    }
    cin>>x>>y;
    for(int i=n;i>=1;i--)
    {
        if(a[i][0]<=x&&a[i][1]<=y&&a[i][2]>=x&&a[i][3]>=y)
        {
            cout<<i;
            flag=1;
            break;
        }
    }
    if(flag==-1)
    {
        cout<<flag;
    }
    return 0;
}