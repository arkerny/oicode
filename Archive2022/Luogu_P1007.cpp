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

int n,l,p,maxv,minv;

int main()
{
    scanf("%d%d",&l,&n);
    fo(i,1,n)
    {
        scanf("%d",&p);
        maxv=max(maxv,max(l-p+1,p));
        minv=max(minv,min(l-p+1,p));
    }
    printf("%d %d",minv,maxv);
    return 0;
}