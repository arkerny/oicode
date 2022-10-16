#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define lowbit(_x) (_x&-_x)
#define fo(_var,_a,_b) for(int _var=_a;_var<=_b;_var++)
#define fr(_var,_a,_b) for(int _var=_a;_var>=_b;_var--)
#define foo(_var,_a,_b,_c) for(int _var=_a;_var<=_b;_var+=_c)
#define frr(_var,_a,_b,_c) for(int _var=_a;_var>=_b;_var-=_c)
#define clr(_arr,_val) memset(_arr,_val,sizeof(_arr));

char a[100010],b[100010],c[100010];
int p,n,m,k,numa,numb,now;
int T;

void solve()
{
    scanf("%d%d%d",&n,&m,&k);
    scanf("%s",a+1);
    scanf("%s",b+1);
    sort(a+1,a+n+1);
    sort(b+1,b+m+1);
    p=0,numa=0,numb=0;
    for(int i=1,j=1;i<=n&&j<=m;)
    {
        if(numa==k)
        {
            c[++p]=b[j++];
            numa=0;
            numb=1;
        }
        else if(numb==k)
        {
            c[++p]=a[i++];
            numb=0;
            numa=1;
        }
        else if(a[i]<b[j])
        {
            c[++p]=a[i++];
            numa++;
            numb=0;
        }
        else
        {
            c[++p]=b[j++];
            numb++;
            numa=0;
        }
    }
    fo(i,1,p)
    {
        printf("%c",c[i]);
    }
    printf("\n");
    return ;
}

int main()
{
    scanf("%d",&T);
    while(T--)
    {
        solve();
    }
    

    return 0;
}
