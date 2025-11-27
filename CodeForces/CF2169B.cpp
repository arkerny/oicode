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
#define int ll

string str;

void init()
{
    
    return ;
}

void solve()
{
    init();
    cin>>str;
    if(str.find("**")!=string::npos||str.find(">*")!=string::npos||str.find("><")!=string::npos||str.find("*<")!=string::npos)
    {
        printf("-1\n");
    }
    else
    {
        int le_ans=0,ri_ans=0;
        fo(i,0,str.length()-1)
        {
            if(str[i]=='<'||str[i]=='*')
            {
                le_ans++;
            }
        }
        fr(i,str.length()-1,0)
        {
            if(str[i]=='>'||str[i]=='*')
            {
                ri_ans++;
            }
        }
        printf("%d\n",max(le_ans,ri_ans));
    }



    // putchar('\n');
    return ;
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("CF2169B.in","r",stdin);
    // freopen(".out","w",stdout);
    #endif
    int T;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
