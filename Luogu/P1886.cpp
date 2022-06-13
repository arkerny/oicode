#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int n,k,a[100010];
deque<int>q;

int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    ll p=1;
    for(int i=1;i<=n;i++)
    {
        while(!q.empty()&&q.back()>=a[i])
        {
            q.pop_back();
        }
        q.push_back(a[i]);
        if(i-p>=k&&a[p]!=q.front())
        {
            p++;
        }
        if(i>=k)
        {
            cout<<q.front()<<' ';
        }
    }
    cout<<endl;
    q.clear();
    p=1;
    for(int i=1;i<=n;i++)
    {
        while(!q.empty()&&q.back()<=a[i])
        {
            q.pop_back();
        }
        q.push_back(a[i]);
        if(i-p>=k&&a[p]!=q.front())
        {
            p++;
        }
        if(i>=k)
        {
            cout<<q.front()<<' ';
        }
        
    }

    return 0;
}
