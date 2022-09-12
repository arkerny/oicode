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

int a[100010];
int n;
int tmp,ans;
int flag=1;

inline int read()
{
    int s=0,w=1;
    char c=getchar();
    while(!isdigit(c))
        w=-1,c=getchar();
    while(isdigit(c))
        s=s*10+(c^48),c=getchar();
    return s*w;
}

int main()
{
    n=read();
    fo(i,1,n)
    {
        a[i]=read();
        if(a[i]==1)
        {
            if(flag)
            {
                fr(j,i-1,1)
                {
                    if(a[j]==2)
                    {
                        ans++;
                        break;
                    }
                }
                flag=0;
            }
            ans++;
            tmp=i;
        }
    }
    fo(i,tmp+1,n)
    {
        if(a[i]==3)
        {
            ans++;
            break;
        }
    }
    printf("%d",ans);
    return 0;
}
