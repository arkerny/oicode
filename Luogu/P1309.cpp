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

/*-----Quick Read & Write Start-----*/
#define gc getchar
#define pc putchar
il ll llread()
{
    ll s=0,w=1;
    char ch=gc();
    while(ch<'0'||ch>'9') { if(ch=='-') { w=-1; } ch=gc(); }
    while(ch>='0'&&ch<='9') { s=(s<<1)+(s<<3)+ch-48; ch=gc(); }
    return s*w;
}
/*-----Quick Read & Write End-----*/

ll n,r,q;

struct pers
{
    ll point,power,id;
}per[200010],loser[200010],winer[200010];

il bool cmp(pers per1,pers per2)
{
    if(per1.point==per2.point)
        return per1.id<per2.id;
    else
        return per1.point>per2.point;
}

int main()
{
    n=llread();
    r=llread();
    q=llread();
    fo(i,1,n*2)
        per[i].point=llread();
    fo(i,1,n*2)
    {
        per[i].power=llread();
        per[i].id=i;
    }
    sort(per+1,per+n*2+1,cmp);
    while(r--)
    {
        fo(i,1,n)
        {
            if(per[2*i-1].power<per[2*i].power)
            {
                per[2*i].point++;
                loser[i]=per[2*i-1];
                winer[i]=per[2*i];
            }
            else
            {
                per[2*i-1].point++;
                loser[i]=per[2*i];
                winer[i]=per[2*i-1];
            }
        }
        merge(loser+1,loser+n+1,winer+1,winer+n+1,per+1,cmp);
    }
    cout<<per[q].id;
    return 0;
}