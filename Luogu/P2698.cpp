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
    int x,y;
}a[100010];

int n,d,ans=0x3f3f3f3f;

deque<int> q;

bool cmp(node tmp1,node tmp2)
{
    return tmp1.x<tmp2.x;
}

int main()
{
    scanf("%d%d",&n,&d);
    fo(i,1,n)
    {
        scanf("%d%d",&a[i].x,&a[i].y);
    }
    sort(a+1,a+n+1,cmp);
    fo(i,1,n)
    {
        while(!q.empty()&&a[q.back()].y>a[i].y)
        {
            q.pop_back();
        }
        q.push_back(i);
        while(!q.empty()&&a[q.back()].y-a[q.front()].y>=d)
        {
            ans=min(ans,abs(a[q.back()].x-a[q.front()].x));
            q.pop_front();
        }
    }
    q.clear();
    fo(i,1,n)
    {
        while(!q.empty()&&a[q.back()].y<a[i].y)
        {
            q.pop_back();
        }
        q.push_back(i);
        while(!q.empty()&&a[q.back()].y-a[q.front()].y>=d)
        {
            ans=min(ans,abs(a[q.back()].x-a[q.front()].x));
            q.pop_front();
        }
    }
    printf("%d",ans==0x3f3f3f3f?-1:ans);
    return 0;
}
