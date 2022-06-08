#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
char s1[10000010]={};
int main()
{
	IOS
	ll i=1,j,s=0,t=0;
	while(gets(s1))
	{
		if(s1[0]=='+')
		{
			t++;
		}
		else if(s1[0]=='-')
		{
			t--;
		}
		else
		{
			j=0;
			while(s1[j]-':')
			{
				j++;
			}
			s=s+(strlen(s1+1)-j)*t;
		}
	}
	cout<<s<<endl;
	return 0;
}