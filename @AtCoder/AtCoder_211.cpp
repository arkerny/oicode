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

string dic[6]={
    "TAKAHASHIKUN",
    "Takahashikun",
    "takahashikun",
    "TAKAHASHIKUN.",
    "Takahashikun.",
    "takahashikun."
},tmp;

ll n,ans;

int main()
{
    
    cin>>n;
    fo(i,1,n)
    {
        cin>>tmp;
        fo(j,0,5)
        {
            if(tmp==dic[j])
            {
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    
    return 0;
}