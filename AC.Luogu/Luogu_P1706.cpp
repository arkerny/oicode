#include <bits/stdc++.h>
using namespace std;
int a[1000]={0};
int  book[1000]={0};
int n;
void dfs(int pos)
{
    if(pos==n+1)
    {
        for(int i=1;i<=n;i++)
            cout<<setw(5)<<a[i];
        printf("\n");
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(book[i]==0)
        {
            a[pos]=i;
            book[i]=1;
            dfs(pos+1);
            a[pos]=0;
            book[i]=0;
        }
    }
}
int main()
{
    scanf("%d",&n);
    dfs(1);

    return 0;
}