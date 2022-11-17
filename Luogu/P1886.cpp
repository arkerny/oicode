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

int n,k;
int a[1000010];
deque<int> q;

int main()
{
    scanf("%d%d",&n,&k);
    fo(i,1,n)
    {
        scanf("%d",&a[i]);
    }
    fo(i,1,k-1)
    {
        while(!q.empty()&&a[q.back()]>=a[i])
        {
            q.pop_back();
        }
        q.push_back(i);
    }
    fo(i,k,n)
    {
        while(!q.empty()&&a[q.back()]>=a[i])
        {
            q.pop_back();
        }
        q.push_back(i);
        while(!q.empty()&&q.front()<i-k+1)
        {
            q.pop_front();
        }
        printf("%d ",a[q.front()]);
    }
    printf("\n");
    q.clear();
    fo(i,1,k-1)
    {
        while(!q.empty()&&a[q.back()]<=a[i])
        {
            q.pop_back();
        }
        q.push_back(i);
    }
    fo(i,k,n)
    {
        while(!q.empty()&&a[q.back()]<=a[i])
        {
            q.pop_back();
        }
        q.push_back(i);
        while(!q.empty()&&q.front()<i-k+1)
        {
            q.pop_front();
        }
        printf("%d ",a[q.front()]);
    }
    return 0;
}
