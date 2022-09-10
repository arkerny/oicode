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

int n,m,tmp,ans;

queue <int> q;
bool t[1010];

int main()
{
    scanf("%d %d\n",&m,&n);
    fo(i,1,n)
    {
        scanf("%d",&tmp);
        if(!t[tmp])
        {
            if(q.size()<m)
            {
                q.push(tmp);
                t[tmp]=1;
                ans++;
            }
            else
            {
                t[q.front()]=0;
                q.pop();
                q.push(tmp);
                t[tmp]=1;
                ans++;
            }
        }
    }
    printf("%d",ans);

    return 0;
}
