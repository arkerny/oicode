#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#define lowbit(x) ( x & ( - ( x )))
using namespace std;
const int N=5e5+5;
int n, a[N], b[N], p[N];
long long ans;
void add(int x)
{
	for(; x <= n; x += lowbit(x))
    {
        p[x]++;
    }
}
int ask(int x)
{
	int rec = 0;
	for(;x;x-=lowbit(x))
    {
        rec+=p[x];
    }
    return rec;
}
int calc()
{
	int ans=0, cnt=0;
	memset(p,0,sizeof(p));
	for(int i=1;i<=n*n;i++)
	{
		int x;
		scanf("%d",&x);
		if(x)
        {
            a[++cnt]=b[cnt]=x;
        }
	}
	sort(b+1,b+1+cnt);
	int k=unique(b+1,b+1+cnt)-(b+1);
	for(int i=1;i<=cnt;i++)
{
        a[i]=lower_bound(b+1,b+1+k,a[i])-b;
    }
	for(int i=cnt;i>=1;i--)
    {
        ans+=ask(a[i]-1);
        add(a[i]);
    }
    return ans;
}
int main()
{
	while(scanf("%d",&n))
	{
		if(calc()%2==calc()%2)
        {
            printf("TAK\n");
        }
		else
        {
            printf("NIE\n");
        }
	}
return 0;
}