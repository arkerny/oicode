#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int a[50010];

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        if(a[1]+a[2]>a[n])
        {
            cout<<"-1\n";
        }
        else
        {
            cout<<"1 2 "<<n<<endl;
        }
    }
    return 0;
}