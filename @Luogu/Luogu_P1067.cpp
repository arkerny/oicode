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

ll n,a[100];
bool flag;

int main()
{
    
    cin>>n;
    fo(i,1,n+1)
        cin>>a[i];
    fo(i,1,n)
    {
        if(a[i]==-1||a[i]==1)
            if(i==1)
                if(a[i]==-1)
                {
                    cout<<'-'<<"x^"<<n-i+1;
                }
                else
                {
                    cout<<"x^"<<n-i+1;
                }
            else
                if(n-i+1==1)
                    if(a[i]==-1)
                        cout<<'-'<<"x";
                    else
                        cout<<'+'<<"x";
                else
                    if(a[i]==-1)
                        cout<<'-'<<"x^"<<n-i+1;
                    else
                        cout<<'+'<<"x^"<<n-i+1;
        else
            if(i==1)
            {
                cout<<a[i]<<"x^"<<n-i+1;
            }
            else
            {
                if(n-i+1==1)
                {
                    if(a[i]>0)
                        cout<<'+'<<a[i]<<"x";
                    if(a[i]<0)
                        cout<<'-'<<-a[i]<<"x";
                }
                else
                {
                    if(a[i]>0)
                        cout<<'+'<<a[i]<<"x^"<<n-i+1;
                    if(a[i]<0)
                        cout<<'-'<<-a[i]<<"x^"<<n-i+1;
                }
            }
    }
    if(a[n+1]!=0)
    {
        if(a[n+1]>0)
            cout<<'+'<<a[n+1];
        if(a[n+1]<0)
            cout<<'-'<<-a[n+1];
    }
    return 0;
}