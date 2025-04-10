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

ll a[30010],n,w,p=1,q,sum;

int main()
{
    // freopen("1.in","r",stdin);
    // freopen("1.out","w",stdout);

    cin>>w>>n;
    q=n;
    fo(i,1,n)
    {
        cin>>a[i];
    }

    sort(a+1,a+n+1);

    while(p<=q)
    {
        if(a[p]+a[q]<=w)
        {
            p++;
            q--;
            sum++;
        }
        else
        {
            q--;
            sum++;
        }
    }
    cout<<sum;

    // fclose(stdin);
    // fclose(stdout);
    return 0;
}
