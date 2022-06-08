// 参考：https://www.luogu.com.cn/blog/JSYZCHTHOLLY/solution-cf492d
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define fo(v,a,b) for(ll v=a;v<=b;v++)
#define fr(v,a,b) for(ll v=a;v>=b;v--)

#define foo(v,a,b,c) for(ll v=a;v<=b;v+=c)
#define frr(v,a,b,c) for(ll v=a;v>=b;v-=c)

#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

#define il inline

ll n,x,y,cnt1,cnt2;
short num[2000010];

int main()
{
    
    cin>>n>>x>>y;
    for(ll i=1;i<=x+y;)
    {
		if((cnt1+1)*y<(cnt2+1)*x)
        {
            cnt1++;
            num[i]=1;
            i++;
        }
		if((cnt1+1)*y>(cnt2+1)*x)
        {
            cnt2++;
            num[i]=2;
            i++;
        }
		if((cnt1+1)*y==(cnt2+1)*x)
        {
            cnt1++;
            cnt2++;
            num[i]=num[i+1]=3;
            i+=2;
        }
	}

    fo(i,1,n)
    {
        ll tmp;
        cin>>tmp;
        if(num[tmp%(x+y)]==1)
        {
            cout<<"Vanya"<<endl;
        }
        else if(num[tmp%(x+y)]==2)
        {
            cout<<"Vova"<<endl;
        }
        else
        {
            cout<<"Both"<<endl;
        }
    }


    return 0;
}