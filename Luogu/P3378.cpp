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

priority_queue <ll,vector<ll>,greater<ll>> pq;

ll n,op,tmp;

int main()
{
    
    cin>>n;
    fo(i,1,n)
    {
        cin>>op;
        switch(op)
        {
            case 1:
                cin>>tmp;
                pq.push(tmp);
                break;
            case 2:
                cout<<pq.top()<<endl;
                break;
            case 3:
                pq.pop();
                break;
        }
    }
    
    return 0;
}