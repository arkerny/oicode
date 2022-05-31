#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

ll n,p,h,m;
int a[10005];
bool flag[10005][10005];

int main()
{
    cin>>n>>p>>h>>m;
    a[1]=h;
    for(int i=1;i<=m;i++)
    {
        ll l,r;
        cin>>l>>r; 
        if(l>r)
        {
            swap(l,r);
        }
        if(!flag[l][r])
        {
            flag[l][r]=1;
            a[l+1]--;
            a[r]++;
        }
    }

    for(int i=1;i<=n;i++)
    {
        a[i]+=a[i-1];
        cout<<a[i]<<endl;
    }
    return 0;
}
