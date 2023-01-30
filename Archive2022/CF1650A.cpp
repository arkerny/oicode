#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
int main()
{
	ll T;
	cin>>T;
	while(T--)
	{
		string str="";
		char ch;
		int tmp[1010],p=1;
		memset(tmp,0,sizeof(tmp));
		bool flag=0;
		cin>>str>>ch;
		if((str.length()-1)%2==1)
		{
			cout<<"NO"<<endl;
		}
		for(int i=0;i<str.length();i++)
		{
			if(str[i]==ch)
			{
				tmp[p]=i+1;
				p++;
			}
		}
		for(int i=1;i<=p;i++)
		{
			if(tmp[i]%2==1)
			{
				flag=1;
				break;
			}
		}
		if(flag)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
