#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

string str;

int main()
{
    ll T;
    cin>>T;
    while(T--)
    {
        cin>>str;
        ll ans1=0,ans2=0;
        for(int i=0;i<=2;i++)
        {
            ans1+=str[i];
        }
        for(int i=3;i<=5;i++)
        {
            ans2+=str[i];
        }
        if(ans1==ans2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    

    return 0;
}
