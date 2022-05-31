#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int n,m;

struct node
{
    int spf,cover;
}a[2510];

struct node2
{
    int minspf,maxspf;
}b[2510];

int cmp(node a,node b)
{
    if(a.spf==b.spf)
    {
        return a.cover>b.cover;
    }
    return a.spf>b.spf;
}

int cmp2(node2 a,node2 b)
{
    if(a.minspf==b.minspf)
    {
        return a.maxspf>b.maxspf;
    }
    return a.minspf>b.minspf;
}

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>b[i].minspf>>b[i].maxspf;
    }
    sort(b+1,b+1+n,cmp2);
    for(int i=1;i<=m;i++)
    {
        cin>>a[i].spf>>a[i].cover;
    }
    sort(a+1,a+1+m,cmp);
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[j].spf<=b[i].maxspf&&a[j].spf>=b[i].minspf&&a[j].cover)
            {
                a[j].cover--;
                ans++;
                break;
            }
        }
    }
    cout<<ans;
    return 0;    
}