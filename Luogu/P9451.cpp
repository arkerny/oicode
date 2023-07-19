#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define lowbit(_x) (_x&-_x)
#define fo(_var,_a,_b) for(int _var=_a;_var<=_b;_var++)
#define fr(_var,_a,_b) for(int _var=_a;_var>=_b;_var--)
#define foo(_var,_a,_b,_c) for(int _var=_a;_var<=_b;_var+=_c)
#define frr(_var,_a,_b,_c) for(int _var=_a;_var>=_b;_var-=_c)
#define clr(_arr,_val) memset(_arr,_val,sizeof(_arr));

ull n;

int main()
{
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    int T;
    cin>>T;
    fo(i,1,T)
    {
        scanf("%llu",&n);
        if(__builtin_popcountll(n)>=3)
        {
            printf("No,Commander\n");
        }
        else
        {
            ull ans=(__builtin_popcountll(n)==2)?(n+lowbit(n)):n+1;
            printf("%llu\n",ans);
        }
    }

    return 0;
}