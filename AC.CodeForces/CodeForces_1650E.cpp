#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int a[200010],n,d;
int calc(int p)
{
	int last=0,mi=d,mx=0;
	for(int i=1;i<=n;i++)
    {
		if(i==p)
        {
            continue;
        }
        int tmp=a[i]-a[last]-1;
		mi=min(mi,tmp);
		mx=max(mx,tmp);
		last=i;
	}
	return min(mi,max(((mx-1)/2),d-a[last]-1));
}
int main()
{
	int T;
	cin>>T;
	while(T--)
    {
        int p=1,ans=0;
        cin>>n>>d;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]-a[i-1]-1<a[p]-a[p-1]-1)
            {
                p=i;
            }
        }
        ans=calc(p);
        if(p>1)
        {
            ans=max(ans,calc(p-1));
        }
        cout<<ans<<endl;
    }
	return 0;
}