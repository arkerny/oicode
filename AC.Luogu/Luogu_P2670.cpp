#include<iostream>
using namespace std;
char a[105][105],b[105][105];
int n,m;
void sl(int x,int y)
{
	int sum=0;
	for(int i=x-1;i<=x+1;i++)
	{
		for (int j=y-1;j<=y+1;j++)
		{
			if(a[i][j]=='*')
			{
				sum++;
			}
		}
	}
	b[x][y]=sum+'0';
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];	
			if(a[i][j]=='*')
			{
				b[i][j]='*';
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(a[i][j]!='*')
			{
				sl(i,j);
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout<<b[i][j];
		}
		cout<<endl;
	}
}