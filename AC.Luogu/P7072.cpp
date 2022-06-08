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

ll n,w,t[610],tmp;
void slove(ll n)
{
    ll num=max(1,n*w/100);
    fr(i,600,0)
    {
        num-=t[i];
        if(num<=0)
        {
            cout<<i<<' ';
            break;
        }
    }
    return ;
}
int main()
{
    
    cin>>n>>w;

    fo(i,1,n)
    {
        cin>>tmp;
        t[tmp]+=1;
        slove(i);
    }
    
    return 0;
}