#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

ll T,x,y;

int main()
{
    cin>>T; 
    while(T--)
    {
        cin>>x>>y;
        if(2*x<=y)
        {
            cout<<x<<endl;
        }
        else if(2*y<=x)
        {
            cout<<y<<endl;
        }
        else
        {
            cout<<(x+y)/3<<endl;
        }
    }	
    return 0;
}