#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a[105]={};
	for(int i=1;i<=101;i++)
	{
		cin>>a[i];
		if(a[i]==0)
		{
			break;
		}
	}
	for(int i=101;i>=1;i--)
	{
		if(a[i]!=0)
		{
			cout<<a[i]<<" ";
		}
	}
	return 0;
}