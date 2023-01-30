#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

const int INF = 0x3f3f3f3f;

ll a[200010],k,n,sum;

int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        if(a[i]!=0)
        {
            int j=i-1;
            while(a[j]!=0&&a[i]>a[j]&&a[i]<=a[j]+k)
            {
                sum++;
                a[j]=0;
                if(j>1)
                {
                    j--;
                }
                else
                {
                    break;
                }
            }
        }
    }
    cout<<n-sum;
    return 0;
}
