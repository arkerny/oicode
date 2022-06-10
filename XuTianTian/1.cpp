#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
const int N=2e5+5,inf=0x7fffffff;
int n,m,l=1,r,now,size,block,a[N],b[N],ans[N],en[N],maxx[N],minn[N];
struct node{ int l,r,id; }p[N];
void read(int &v)
{
	char ch;
	for(ch='*';ch>'9' || ch<'0';ch=getchar());
	for(v=0;ch>='0' && ch<='9';ch=getchar())  v=v*10+ch-'0';
}
int get(int x){ return (x-1)/size+1; }
bool cmp(node x,node y)
{
	return get(x.l)^get(y.l)?get(x.l)<get(y.l):x.r<y.r;
}
int main()
{
	//freopen("1.in","r",stdin);
	//freopen("1.ans","w",stdout);
	read(n),size=sqrt(n);
	for(int i=1;i<=n;i++)  read(a[i]),b[i]=a[i];
	sort(b+1,b+1+n);
	int k=unique(b+1,b+1+n)-(b+1);
	for(int i=1;i<=n;i++)  a[i]=lower_bound(b+1,b+1+k,a[i])-b;
	read(m);
	for(int i=1;i<=m;i++)  read(p[i].l),read(p[i].r),p[i].id=i;
	sort(p+1,p+1+m,cmp);
	//int l,r;
	for(int i=1;i<=m;i++)
	{
		int ql=p[i].l,qr=p[i].r;
		if(get(ql)==get(qr))
		{
			now=0;
			for(int j=ql;j<=qr;j++)  minn[a[j]]=inf;
			for(int j=ql;j<=qr;j++)
			{
				if(minn[a[j]]==inf)  minn[a[j]]=j;
				now=max(now,j-minn[a[j]]);
			}
			for(int j=ql;j<=qr;j++)  minn[a[j]]=inf;
			ans[p[i].id]=now;
			continue;
		}
		if(block!=get(ql))
		{
			for(int j=1;j<=k;j++)  minn[j]=inf,maxx[j]=0;
			now=0,l=(get(ql)^get(n))?size*get(ql):n,r=l-1,block=get(ql);
		}
		while(r<qr)
		{
			maxx[a[++r]]=max(maxx[a[r]],r);
			minn[a[r]]=min(minn[a[r]],r);
			now=max(now,maxx[a[r]]-minn[a[r]]);
		}
		int t=l,rec=0;
		while(t>ql)
		{
			//en[a[--t]]=max(maxx[a[t]],t);
			if(!en[a[--t]])  en[a[t]]=max(maxx[a[t]],t);
			rec=max(rec,en[a[t]]-t);
		}
		while(t<l)  en[a[t++]]=0;
		ans[p[i].id]=max(now,rec);
	}
	for(int i=1;i<=m;i++)  printf("%d\n",ans[i]);
return 0;
}