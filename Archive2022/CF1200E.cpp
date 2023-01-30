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

int n;
string str,ans;
int nxt[1000010];

il void get_nxt(string str)
{
    str=' '+str;
    nxt[0]=nxt[1]=0;
    for(int i=2,j=0;i<=str.length();i++)
    {
        while(j&&str[i]!=str[j+1])
        {
            j=nxt[j];
        }
        if(str[i]==str[j+1])
        {
            j++;
        }
        nxt[i]=j;
    }
    return ;
}

int main()
{
    IOS
    cin>>n;
    cin>>ans;
    fo(i,2,n)
    {
        cin>>str;
        int len=min(str.length(),ans.length());
        string tmp=str+"#"+ans.substr(ans.length()-len,len);
        get_nxt(tmp);
        fo(j,nxt[tmp.length()],str.length()-1)
        {
            ans+=str[j];
        }
    }
    cout<<ans;
    return 0;
}
