#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[8],b[8],c[8],max=0;
    for(int i=1;i<=7;i++)
    {
        cin>>a[i]>>b[i];
        c[i]=a[i]+b[i];
        if(c[i]>max && c[i]>8)
        {
            max=c[i];
        }
    }
    for(int i=1;i<=7;i++)
    {
        if(c[i]==max)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<max<<endl;
    return 0;
}