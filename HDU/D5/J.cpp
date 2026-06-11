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

int n;
int a[200010],f[200010];


int main()
{
    #ifndef ONLINE_JUDGE
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    #endif

    cin>>n;
    fo(i,1,n)
    {
        cin>>a[i];
    }
    int ans = 0;
    fo(i,1,n)
    {
        int pos = upper_bound(f+1,f+ans+1,a[i]) - (f+1);
        if(pos == ans)
        {
            f[++ans] = a[i];
        }
        else
        {
            f[pos + 1] = a[i];
        }
    }
    cout<<ans;


    return 0;
}
