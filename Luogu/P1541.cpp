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

int n,m,a[400],t[5];
int dp[50][50][50][50];
int tmp;

int main()
{
    scanf("%d %d\n",&n,&m);
    fo(i,1,n)
    {
        scanf("%d",&a[i]);
    }
    fo(i,1,m)
    {
        scanf("%d",&tmp);
        t[tmp]++;
    }
    dp[0][0][0][0]=a[1];
    fo(i,0,t[1])
    {
        fo(j,0,t[2])
        {
            fo(k,0,t[3])
            {
                fo(l,0,t[4])
                {
                    int p=i+j*2+k*3+l*4+1;
                    if(i!=0)
                    {
                        dp[i][j][k][l]=max(dp[i][j][k][l],dp[i-1][j][k][l]+a[p]);
                    }
                    if(j!=0)
                    {
                        dp[i][j][k][l]=max(dp[i][j][k][l],dp[i][j-1][k][l]+a[p]);
                    }
					if(k!=0)
                    {
                        dp[i][j][k][l]=max(dp[i][j][k][l],dp[i][j][k-1][l]+a[p]);
                    }
                    if(l!=0)
                    {
                        dp[i][j][k][l]=max(dp[i][j][k][l],dp[i][j][k][l-1]+a[p]);
                    }
                }
            }
        }
    }
    printf("%d",dp[t[1]][t[2]][t[3]][t[4]]);
    return 0;
}
