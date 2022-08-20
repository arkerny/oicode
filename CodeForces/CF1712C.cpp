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

int T;

vector<int>vec[100010];

void slove()
{
    int n,a[100010],ans=0;
    scanf("%d",&n);
    fo(i,1,n)
    {
        vec[i].clear();
    }
    fo(i,1,n)
    {
        scanf("%d",&a[i]);
        vec[a[i]].push_back(i);
    }
    int tmp=a[n];
    bool flag=1;
    fr(i,n-1,1)
    {
        if(flag&&a[i]>a[i+1])
        {
            flag=0;
        }
        if(a[i]>=tmp)
        {
            fo(j,1,vec[a[i]].size())
            {
                a[j]=0;
            }
            ans++;
        }
        if(a[n]!=tmp)
        {
            tmp=a[n];
            i=n;
        }
    }
    printf("ans=%d",ans);
    printf("\n");
    return ;
}

int main()
{
    scanf("%d",&T);
    while(T--)
    {
        slove();
    }

    return 0;
}
