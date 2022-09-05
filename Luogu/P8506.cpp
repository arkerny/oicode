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

string str;
int n,ans;

int main()
{
    scanf("%d\n",&n);
    fo(i,1,n)
    {
        str="";
        getline(cin,str);
        int p=0;
        while(str[p]==' ')
        {
            p++;
        }
        if(str[p]=='#'&&str[p+1]==' ')
        {
            p++;
            while(str[p]==' ')
            {
                p++;
                if(p==str.length())
                {
                    ans--;
                }
            }
            ans++;
        }
    }
    printf("%d",ans);
    return 0;
}