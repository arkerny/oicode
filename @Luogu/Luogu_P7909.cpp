#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int INF = 0x3f3f3f3f;

ll n,l,r,ans;

int main()
{
    cin>>n>>l>>r;
	cout<<min(r,l+(n-1-l%n))%n;

    return 0;
}