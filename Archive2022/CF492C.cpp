#include<bits/stdc++.h>
using namespace std;

struct point
{
    long long a,b,c;
}p[100010];

long long n,r,avg,sum,t,ans;

bool cmp(point x,point y)
{
    if(x.b<y.b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    cin>>n>>r>>avg;
    sum=n*avg;
    for(int i=1;i<=n;i++)
    {
        cin>>p[i].a>>p[i].b;
        sum-=p[i].a;
    }
    sort(p+1,p+n+1,cmp);
    if(sum>0)
    {
        for(int i=1;i<=n;i++)
        {
            if(r>p[i].a)
            {
                if(sum>(r-p[i].a))
                {
                    sum-=(r-p[i].a);
                    ans+=(r-p[i].a)*p[i].b;
                }
                else
                {
                    ans+=sum*p[i].b;
                    cout<<ans;
                    return 0;
                }
            }
        }
    }
    else
    {
        cout<<'0';
        return 0;
    }

}