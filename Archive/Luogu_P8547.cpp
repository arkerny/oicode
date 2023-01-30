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

int T;
int n,ans;
int a[31]={34,71,83,95,107,119,130,142,154,166,178,201,213,225,237,260,272,284,296,331,343,355,390,402,414,461,473,520,532,591,671};

int main()
{
    scanf("%d",&T);
    while(T--)
    {
        ans=0;
        scanf("%d",&n);
        if(n>720)
        {
            ans+=n/720*31;
            n=n%720;
        }
        fo(j,0,30)
        {
            if(n>=a[j])
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        printf("%d\n",ans);
    }
    
    return 0;
}