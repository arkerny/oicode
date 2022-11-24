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
    int id;
    string str;
}a[100];

bool cmp(node x,node y)
{
    return x.str.length()==y.str.length()?x.str<y.str:x.str.length()<y.str.length();
}

int main()
{
    int n;
    cin>>n;
    fo(i,1,n)
    {
        cin>>a[i].str;
        a[i].id=i;
    }
    sort(a+1,a+n+1,cmp);

    cout<<a[n].id<<endl<<a[n].str;

    return 0;
}