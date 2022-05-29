#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
using namespace std;
typedef long long ll;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int l,r,a,ans=0;
		scanf("%d %d %d",&l,&r,&a);
		ans=r/a+r%a;
		int i=r/a;
		r=i*a;
		if(r>l)
		{
			r--;
			ans=max(ans,r/a+r%a);
		}
		printf("%d\n",ans);
	}
	return 0;
}
