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

string str,book[14]={"DX","2222","AAAA","KKKK","QQQQ","JJJJ","TTTT","9999","8888","7777","6666","5555","4444","3333"};

int main()
{
    scanf("%d",&T);
    while(T--)
    {
        cin>>str;
        bool flag=0;
        fo(i,0,13)
        {
            if(str.find(book[i])!=string::npos)
            {
                flag=1;
            }
        }
        if(flag)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }


    return 0;
}
