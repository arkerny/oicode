#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int T,n;
char a[2000010],b[2000010];
int lena,lenb,f[2000010];


il void get_f()
{
    f[1]=0;
    for(int i=2,j=0;i<=lenb;i++)
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
    for(int i=1,j=0;i<=lena;i++)
    {
        while(j&&a[i]!=b[j+1])
        {
            j=f[j];
        }
        if(a[i]==b[j+1])
        {
            j++;
        }
        if(j==lenb)
        {
            printf("%d\n",i-lenb+1);
            j=f[j];
        }
    }
    for(int i=1;i<=lenb;i++)
    {
        printf("%d ",f[i]);
    }
}

int main()
{
    
    T=1;
    while(T--)
    {
        scanf("%s%s",a+1,b+1);
        lena=strlen(a+1);
        lenb=strlen(b+1);
        get_f();
        kmp();
    }

    return 0;
}
