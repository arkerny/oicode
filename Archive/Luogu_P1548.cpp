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
/*-----Quick Read & Write Start-----*/
#define gc getchar
#define pc putchar
il int intread()
{
    int s=0,w=1;
    char ch=gc();
    while(ch<'0'||ch>'9') { if(ch=='-') { w=-1; } ch=gc(); }
    while(ch>='0'&&ch<='9') { s=(s<<1)+(s<<3)+ch-48; ch=gc(); }
    return s*w;
}
il void intwrite(int x)
{
    if(x<0) { pc('-'); x=-x; }
    while(x>0) { pc(x%10+'0'); x/=10; }
}
il ll llread()
{
    ll s=0,w=1;
    char ch=gc();
    while(ch<'0'||ch>'9') { if(ch=='-') { w=-1; } ch=gc(); }
    while(ch>='0'&&ch<='9') { s=(s<<1)+(s<<3)+ch-48; ch=gc(); }
    return s*w;
}
il void llwrite(ll x)
{
    if(x<0) { pc('-'); x=-x; }
    while(x>0) { pc(x%10+'0'); x/=10; }
}
il string strread()
{
    string s="";
    char ch=gc();
    while(ch==' '||ch=='\n'||ch=='\r') { ch=gc(); }
    while(ch!='\n'&&ch!='\r') { s+=ch; ch=gc(); }
    return s;
}
il void strwrite(string s)
{
    ll i=0;
    while(s[i]!='\0') { pc(s[i++]); }
}
/*-----Quick Read & Write End-----*/

ll n,m,ans1,ans2;

int main()
{
    
    n=llread();
    m=llread();

    ans2=((m+1)*(n+1)*m*n)/4;
    for(ll i=n,j=m;i>=1&&j>=1;i--,j--)
    {
        ans1+=i*j;
    }
    
    cout<<ans1;
    pc(' ');
    cout<<ans2-ans1;

    return 0;
}