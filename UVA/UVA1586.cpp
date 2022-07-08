#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int n;
double book[26];

int main()
{
    book['C'-'A']=12.01;
    book['H'-'A']=1.008;
    book['O'-'A']=16.00;
    book['N'-'A']=14.01;

    scanf("%d",&n);
    while(n--)
    {
        char str[110]={};
        bool flag[110]={};
        double ans=0;
        scanf("%s",str+1);
        for(int i=1;i<=strlen(str+1);i++)
        {
            if(str[i]>='0'&&str[i]<='9')
            {
                flag[i]=1;
            }
        }
        for(int i=1,j=0;i<=strlen(str+1);)
        {
            int cnt=0;
            j=i+1;
            while(1)
            {
                if(!flag[j])
                {
                    j--;
                    break;
                }
                j++;
            }
            if(i==j)
            {
                cnt=1;
            }
            else
            {
                for(int k=i+1;k<=j;k++)
                {
                    cnt*=10;
                    cnt+=str[k]-'0';
                }
            }
            ans+=cnt*book[str[i]-'A'];
            i=j+1;
        }
        printf("%.3lf\n",ans);
    }



    return 0;
}
