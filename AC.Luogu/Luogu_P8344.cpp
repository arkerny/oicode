#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
ll T,x,y,z;
int main()
{
    cin>>T;
	while(T--)
    {
		cin>>x>>y>>z;
		if(x<=z&&(z-1+z-x)*x/2+z-x>=y)
        {
            cout<<"Renko"<<endl;
        }
		else
        {
            cout<<"Merry"<<endl;
		}
    }
	return 0;
}