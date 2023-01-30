#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int n,a[100010],b[100010],ans[100010];

priority_queue<int>q;

int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            int x=a[i]+b[j];
            if(q.size()<n)
            {
                q.push(x);
            }
            else
            {
                if(q.top()>x)
                {
                    q.pop();
                    q.push(x);
                }
                else
                {
                    break;
                }
            }
        }
    }
    for(int i=n;i>=1;i--)
    {
        ans[i]=q.top();
        q.pop();
    }
    for(int i=1;i<=n;i++)
    {
        printf("%d ",ans[i]);
    }
    
    return 0;
}
