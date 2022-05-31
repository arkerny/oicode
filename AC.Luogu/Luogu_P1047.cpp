#include<bits/stdc++.h>
using namespace std;
int a[10005];
int s,n,m,h,l;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>h>>l;
        for(int j=h;j<=l;j++)
            a[j]=1;
    }
    for(int i=0;i<=n;i++)
        if(a[i]==0)
            s++;
    cout<<s;
}