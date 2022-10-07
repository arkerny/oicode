#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define il inline

#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define fo(v,a,b) for(ll v=a;v<=b;v++)
#define fr(v,a,b) for(ll v=a;v>=b;v--)

#define foo(v,a,b,c) for(ll v=a;v<=b;v+=c)
#define frr(v,a,b,c) for(ll v=a;v>=b;v-=c)

#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

const int INF=0x3f3f3f3f;

struct node
{
    ll x,y;
};

ll n,m[40][40];
node pre;

int main()
{
    cin>>n;
    m[1][(n+1)/2]=1;
    pre.x=1;
    pre.y=(n+1)/2;
    fo(i,2,n*n)
    {
        if(pre.x==1&&pre.y!=n)
        {
            m[n][pre.y+1]=i;
            pre.x=n;
            pre.y+=1;
        }
        else if(pre.y==n&&pre.x!=1)
        {
            m[pre.x-1][1]=i;
            pre.x-=1;
            pre.y=1;
        }
        else if(pre.x==1&&pre.y==n)
        {
            m[2][n]=i;
            pre.x=2;
            pre.y=n;
        }
        else if(pre.x!=1&&pre.y!=n)
        {
            if(m[pre.x-1][pre.y+1]==0)
            {
                m[pre.x-1][pre.y+1]=i;
                pre.x-=1;
                pre.y+=1;
            }
            else
            {
                m[pre.x+1][pre.y]=i;
                pre.x+=1;
            }
        }
    }
    fo(i,1,n)
    {
        fo(j,1,n)
        {
            cout<<m[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}