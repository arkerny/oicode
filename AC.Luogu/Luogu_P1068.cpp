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

struct peo
{
    ll id,score;
}t[10010];

bool cmp(peo tmp1,peo tmp2)
{
    if(tmp1.score==tmp2.score)
    {
        return tmp1.id<tmp2.id;
    }
    else
    {
        return tmp1.score>tmp2.score;
    }
}

ll n,m,tmp;

int main()
{
    
    cin>>n>>m;
    m=floor((m)*1.5);
    fo(i,1,n)
    {
        cin>>t[i].id>>t[i].score;
    }
    sort(t+1,t+n+1,cmp);
    fo(i,m+1,n)
    {
        if(t[i].score==t[m].score)
        {
            m++;
        }
    }
    cout<<t[m].score<<' '<<m<<endl;
    fo(i,1,m)
    {
        cout<<t[i].id<<' '<<t[i].score<<endl;
    }
    return 0;
}