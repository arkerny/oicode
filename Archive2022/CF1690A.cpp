#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

ll T;
ll n;
void slove()
{
    cin>>n;
    ll tmp=n/3;
    if(n%3==0)
    {
        cout<<tmp<<' '<<tmp+1<<' '<<tmp-1<<endl;
    }
    else if(n%3==1)
    {
        cout<<tmp<<' '<<tmp+2<<' '<<tmp-1<<endl;
    }
    else
    {
        cout<<tmp+1<<' '<<tmp+2<<' '<<tmp-1<<endl;
    }


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
