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

const ll MAXN=100000010;

ll n,q,temp,cnt=1;
int prime[MAXN];
bool book[MAXN];

void work()
{
    fo(i,2,sqrt(n))
    {
        if(book[i]==0)
        {
            foo(j,i*i,n,i)
            {
                book[j]=1;
            }
        }
    }
}

int main()
{
    // freopen("1.in","r",stdin);
    // freopen("1.out","w",stdout);
    scanf("%d%d",&n,&q); // cin>>n>>q;
    book[1]=1;
    work();
    fo(i,1,n)
    {
        if(book[i]==0)
        {
            prime[cnt]=i;
            cnt++;
        }
    }
    fo(i,1,q)
    {
        scanf("%d",&temp); // cin>>temp;
        printf("%d\n",prime[temp]); // cout<<prime[temp]<<endl;
    }
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}

