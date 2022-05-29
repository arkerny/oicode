#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

struct node
{
	int id,x,w;
}a[200010];

bool cmp(node a,node b)
{
	return a.w<b.w;
}

bool cmp2(node a,node b)
{
	return a.x<b.x;
}

int main()
{
	int T;
	scanf("%lld",&T);
	while(T--)
	{
		int n,m;
		int ans=0;
		cin>>n>>m;
		
		for(int i=1;i<=m;i++)
		{
			cin>>a[i].x>>a[i].w;
			a[i].id=i;
		}
		sort(a+1,a+m+1,cmp);
		
		for(int i=1;i<=n*2;i++)
		{
			ans+=a[i].w;
		}
		
		cout<<ans<<endl;
		
		sort(a+1,a+2*n+1,cmp2);
		
		for(int i=1;i<=n;i++)
		{
			cout<<a[i].id<<' '<<a[2*n-i+1].id<<endl;
		}
	}
		
	return 0;
}
