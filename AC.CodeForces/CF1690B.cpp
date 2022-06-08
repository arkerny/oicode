#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

ll T;

void slove()
{
    ll a[50010],b[50010],c[50010],sum1=0,sum2=0;
    ll n,tmp=0x7fffffff,mx;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
        c[i]=a[i]-b[i];
        if(b[i]>0)
        {
            tmp=min(tmp,c[i]);
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(c[i]>tmp||c[i]<0)
        {
            cout<<"NO"<<endl;
            return ;
        }
    }


    cout<<"YES"<<endl;
    return ;
}

int main()
{
    IOS
    cin>>T;
    while(T--)
    {

        slove();

    }
    

    return 0;
}
