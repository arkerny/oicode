#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define il inline
#define fo(_var,_a,_b) for(int _var=_a;_var<=_b;_var++)
#define fr(_var,_a,_b) for(int _var=_a;_var>=_b;_var--)
#define clr(_arr,_val) memset(_arr,_val,sizeof(_arr))

const int MOD=998244353;

struct data
{
    int r,d;
    bool visr,visd;
}t[1010][1010];

int T,id;
int n,m,c,f;
int ansc,ansf;

int sumr[1010][1010];
int sumd[1010][1010];

char a[1010][1010];

il void init()
{
    fo(i,1,n)
    {
        fo(j,1,m)
        {
            t[i][j].visd=0;
            t[i][j].visr=0;
            t[i][j].r=0;
            t[i][j].d=0;
        }
    } 
    ansc=0;
    ansf=0;
    return ;
}

il void calcr(int x,int y)
{
    t[x][y].visr=1;
    fo(i,y+1,m)
    {
        if(a[x][i]=='0')
        {
            t[x][y].r++;
        }
        else
        {
            fo(j,1,t[x][y].r)
            {
                t[x][y+j].r=t[x][y].r-j;
                t[x][y+j].visr=1;
            }
            break;
        }
    }
    return ;
}

il void calcd(int x,int y)
{
    t[x][y].visd=1;
    fo(i,x+1,n)
    {
        if(a[i][y]=='0')
        {
            t[x][y].d++;
        }
        else
        {
            fo(j,1,t[x][y].d)
            {
                t[x+j][y].d=t[x][y].d-j;
                t[x+j][y].visd=1;
            }
            break;
        }
    }
    return ;
}

il void func(int x,int y)
{
    ansc=(ansc+(t[x][y].r*(sumr[x+t[x][y].d][y]-sumr[x+1][y]))%MOD)%MOD;
    return ;
}

il void funf(int x,int y)
{
    ansf=(ansf+t[x][y].r*(sumd[x+t[x][y].d-1][y]-sumd[x+1][y])%MOD)%MOD;
    return ;
}

il void get_sum()
{
    fo(j,1,m)
    {
        fo(i,1,n)
        {
            sumr[i][j]=(sumr[i-1][j]+t[i][j].r)%MOD;
        }
    }
    fo(j,1,m)
    {
        fo(i,1,n)
        {
            sumd[i][j]=(sumd[i-1][j]+(t[i][j].d*t[i][j].r)%MOD)%MOD;
        }
    }
    return ;
}

int main()
{
    // freopen("plant.in","r",stdin);
    // freopen("plant.out","w",stdout);
    scanf("%d%d",&T,&id);
    while(T--)
    {
        scanf("%d%d%d%d",&n,&m,&c,&f);
        init();
        fo(i,1,n)
        {
            scanf("%s",a[i]+1);
        }
        fo(i,1,n)
        {
            fo(j,1,m)
            {
                if(a[i][j]=='0'&&!t[i][j].visr)
                {
                    calcr(i,j);
                }
                if(a[i][j]=='0'&&!t[i][j].visd)
                {
                    calcd(i,j);
                }
            }
        }
        get_sum();
        if(c!=0)
        {
            fo(i,1,n)
            {
                fo(j,1,m)
                {
                    if(a[i][j]=='0'&&t[i][j].r&&i<n-1&&j<m)
                    {
                        func(i,j);
                    }
                }
            }
        }
        if(f!=0)
        {
            fo(i,1,n)
            {
                fo(j,1,m)
                {
                    if(a[i][j]=='0'&&t[i][j].r&&i<n-2&&j<m)
                    {
                        funf(i,j);
                    }
                }
            }
        }
        printf("%d %d\n",ansc*c%MOD,ansf*f%MOD);
    }
    return 0;
}
