#include<bits/stdc++.h>
using namespace std;
int n;
string a[51],b[51];
int ans=2501;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
        b[i]=a[i]+a[i];
	}
	for(int i=0;i<n;i++)
	{
		int cnt=0;
		for(int j=0;j<n;j++)
		{
			if(b[j].find(a[i])!=-1)
			{
				cnt+=b[j].find(a[i]);
			}
			if(b[j].find(a[i])==-1)
			{
				cout<<-1;
				return 0;
			}
		}
		ans=min(ans,cnt);
	}
	cout<<ans;
}