#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

unsigned long long n,k,d,a[1010];

unsigned long long binpow(long long a,long long b)
{
    long long res = 1;
    while(b>0) 
    {
        if(b&1)
        {
            res=res*a;
        }
        a=a*a;
        b>>=1;
    }
    return res;
}
int main()
{

    cin>>n>>k>>d;
    if(binpow(k,d)<n)
    {
        cout<<"no";
        return 0;   
    }
    cout<<"yes"<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int p=d;p>=1;p--)
        {
            cout<<a[p]+1<<' ';
        }
        a[1]+=1;
        for(int p=1;a[p]+1>k;p++)
        {
            a[p]=0;
            a[p+1]++;
        }
        cout<<endl;

    }

    return 0;
}