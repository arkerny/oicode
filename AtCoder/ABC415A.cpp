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

int n,a[100010],x;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("A.in","r",stdin);
    // freopen(".out","w",stdout);
    #endif

    cin>>n;
    fo(i,1,n)
    {
        cin>>a[i];
    }
    cin>>x;
    bool flag=false;
    fo(i,1,n)
    {
        if(a[i]==x)
        {
            flag=true;
        }
    }
    cout<<(flag?"Yes":"No");

    return 0;
}
