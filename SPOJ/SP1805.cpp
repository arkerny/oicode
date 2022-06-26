#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

struct node
{
    ll h,w;
};

ll n;

void slove()
{
    ll a[100010]={},ans=0;
    stack<node>s;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    n++;
    a[n]=0;
    for(int i=1;i<=n;i++)
    {
        ll wid=0;
        while(!s.empty()&&s.top().h>a[i])
        {
            wid+=s.top().w;
            ans=max(ans,wid*s.top().h);
            s.pop();
        }
        s.push(node{a[i],wid+1});
    }
    cout<<ans<<endl;
}

int main()
{
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        slove();
    }
    return 0;
}