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

char str[3010];
ll n,ans;

auto fun(ll l,ll r)
{
    int c=0;
    while(l>=1&&r<=n)
    {
        if(str[l]==str[r]||str[l]=='?'||str[r]=='?')
        {
            c++;
            l--,r++;
        }
        else
        {
            break;
        }
    }
    return c;
}

int main()
{
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    
    cin>>n;
    scanf("%s",str+1);

    fo(i,1,n)
    {
        ans+=fun(i-1,i+1)+1;
        ans+=fun(i,i+1);
    }
    cout<<ans;

    // fclose(stdin);
    // fclose(stdout);
    return 0;
}
