#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline

int T;
char a[2000010],b[2000010];
int n,m,f[2000010];

il void get_f()
{
    f[1]=0;
    for(int i=2,j=0;i<=m;i++)
    {
        while(j&&b[i]!=b[j+1])
        {
            j=f[j];
        }
        if(b[i]==b[j+1])
        {
            j++;
        }
        f[i]=j;
    }
    return ;
}

il void kmp()
{
    for(int i=1,j=0;i<=n;i++)
    {
        while(j&&a[i]!=b[j+1])
        {
            j=f[j];
        }
        if(a[i]==b[j+1])
        {
            j++;
        }
        if(j==m)
        {
            printf("%d\n",i-m+1);
            j=f[j];
        }
    }
    for(int i=1;i<=m;i++)
    {
        printf("%d ",f[i]);
    }
}

int main()
{
    scanf("%s%s",a+1,b+1);
    n=strlen(a+1);
    m=strlen(b+1);
    get_f();
    kmp();
    return 0;
}
