#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define clr(_arr,_val) memset(_arr,_val,sizeof(_arr));
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n,m,h,mm;
        bool t[1500];
        clr(t,0);
        scanf("%d%d%d",&n,&h,&m);
        mm=h*60+m;
        for(int i=1;i<=n;i++)
        {
            scanf("%d%d",&h,&m);
            t[h*60+m]=1;
        }
        for(int i=0;i<1440;i++)
        {
            if(t[(mm+i)%1440])
            {
                printf("%d %d\n",i/60,i%60);
                break;
            }
        }
    }
    return 0;
}