#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
struct node
{
    long long a,b;
}movie[200010];
long long n,m,a[200010],ans;
map <int,int> mp;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>movie[i].a;
    }
    for(int i=1;i<=m;i++)
    {
        cin>>movie[i].b;
    }
    for(int i=1;i<=m;i++)
    {
        if(mp[movie[i].a]==mp[movie[ans].a]&&mp[movie[ans].b]<mp[movie[i].b])
        {
            ans=i;
        }
        if(mp[movie[i].a]>mp[movie[ans].a])
        {
            ans=i;
        }
    }
    if(ans==0)
    {
        ans=n;
    }
    cout<<ans;
    return 0;
}