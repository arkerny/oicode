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

struct node
{
    string name;
    int rank;
};

deque <node> G,B;

int main()
{
    #ifndef ONLINE_JUDGE
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    #endif

    int n;
    cin>>n;
    int a;
    string b;
    fo(i,1,n)
    {
        cin>>a>>b;
        node s;
        s.name = b;
        s.rank = i;
        if(a)
        {
            B.push_back(s);
        }
        else
        {
            G.push_back(s);
        }
    }
    while(!B.empty())
    {
        if(B.front().rank<G.front().rank)
        {
            cout<<B.front().name<<' '<<G.back().name<<endl;
            B.pop_front();
            G.pop_back();
        }
        else
        {
            cout<<G.front().name<<' '<<B.back().name<<endl;
            G.pop_front();
            B.pop_back();
        }
    }

    return 0;
}
