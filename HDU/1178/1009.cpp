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
#define int ll

int k, l, r;

int non_run[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int run[13]={0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int work[500];
int ans,now;

bool is_run(int year)
{
    return (year%4==0&&year%100!=0)||(year%400==0);
}

void init()
{
    fo(i,1,366)
    {
        work[i]=0;
    }
    ans=0;
    now=2;
}

void solve()
{
    init();
    cin>>k>>l>>r;

    fo(i,2025,l-1)
    {
        now=(now+(is_run(i)?366:365))%7;
    }

    fo(i,l,r)
    {
        int tmp=1;
        fo(j,1,12)
        {
            int tmp2=is_run(i)?run[j]:non_run[j];
            fo(d,1,tmp2)
            {
                if(now>=0&&now<=4)
                {
                    work[tmp]++;
                }
                tmp++;
                now=(now+1)%7;
            }
            if(!is_run(i)&&j==2)
            {
                tmp++;
            }
        }
    }

    sort(work+1,work+367);

    fo(i,1,k)
    {
        ans+=work[i];
    }
    
    cout<<ans<<endl;
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("1009.in","r",stdin);
    // freopen(".out","w",stdout);
    #endif
    int T;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}