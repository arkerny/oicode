#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

const int INF = 0x3f3f3f3f;

struct node
{
    double x,y;
    double p;
}a[101];

ll n;
double ans=1000000.0;

int main()
{

    cin>>a[0].x>>a[0].y;
    a[0].p=a[0].x/a[0].y*1000;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].x>>a[i].y;
        a[i].p=a[i].x/a[i].y*1000;
    }
    for(int i=0;i<=n;i++)
    {
        if(a[i].p<ans)
        {
            ans=a[i].p;
        }
    }
    printf("%.2lf",ans);


    return 0;
}