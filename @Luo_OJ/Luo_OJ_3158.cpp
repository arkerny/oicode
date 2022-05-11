#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define fo(v,a,b) for(ll v=a;v<=b;v++)
#define fr(v,a,b) for(ll v=a;v>=b;v--)

#define foo(v,a,b,c) for(ll v=a;v<=b;v+=c)
#define frr(v,a,b,c) for(ll v=a;v>=b;v-=c)

#define il inline

int main()
{
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    

    ll T;
    cin>>T;
    while(T--)
    {
        ll n,now=1,l,r;
        cin>>n;
        fo(i,1,n)
        {
            cin>>l>>r;
            if(now>r)
            {
                cout<<"0 ";
                continue;
            }
            now=max(now,l);
            cout<<now++<<' ';
        }
        cout<<endl;
    }

    // fclose(stdin);
    // fclose(stdout);
    return 0;
}
