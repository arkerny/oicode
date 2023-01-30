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

struct node 
{
    int head;
    string name;
}a[100005];

int n,m,x,y;

int main()
{
    cin>>n>>m;
    fo(i,0,n-1)
    {
        cin>>a[i].head>>a[i].name;
    }
    int now=0;
    fo(i,1,m)
    {
        cin>>x>>y;
        if(a[now].head==0&&x==0)
        {
            now=(now+n-y)%n;
        }
        else if(a[now].head==0&&x==1)
        {
            now=(now+y)%n;
        }
        else if(a[now].head==1&&x==0)
        {
            now=(now+y)%n;
        }
        else if(a[now].head==1&&x==1)
        {
            now=(now+n-y)%n;
        }
    }
    cout<<a[now].name<<endl;
    return 0;
}