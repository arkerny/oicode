#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline

ll T;

int main()
{
    cin>>T;
    while(T--)
    {
        ll n;
        cin>>n;
        if(n%3==1)
        {
            cout<<"1";
        }
        for(int i=1;i<=n/3;i++)
        {
            cout<<"21";
        }
        if(n%3==2)
        {
            cout<<"2";
        }
        cout<<endl;
    }
    return 0;
}