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

int n,ans;
char a[110][110];

int main()
{
    scanf("%d",&n);
    fo(i,1,n)
    {
        scanf("%s",a[i]+1);
    }
    fo(i,2,n)
    {
        fo(j,1,n-i+1)
        {
            fo(k,1,n-i+1)
            {
                int flag=0;
                fo(l,1,i)
                {
                    if(a[j+l-1][k+l-1]!='1')
                    {
                        flag=1;
                    }
                }
                fo(l,1,i)
                {
                    if(a[j+l-1][k+i-l]!='1')
                    {
                        flag=1;
                    }
                }
                if(!flag)
                {
                    ans++;
                }
            }
        }
    }
    printf("%d",ans);
    return 0;
}