#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

const int INF = 0x3f3f3f3f;

char dic[2][27][27];
string k,m;

int main()
{
    for(int i=0;i<26;i++)
    {
        dic[0][0][i]='A'+i;
    }
    for(int i=1;i<26;i++)
    {
        for(int j=0;j<25;j++)
        {
            dic[0][i][j]=dic[0][i-1][j+1];
        }
        dic[0][i][25]=dic[0][i-1][0];
    }
    for(int i=0;i<26;i++)
    {
        dic[1][0][i]='a'+i;
    }
    for(int i=1;i<26;i++)
    {
        for(int j=0;j<25;j++)
        {
            dic[1][i][j]=dic[1][i-1][j+1];
        }
        dic[1][i][25]=dic[1][i-1][0];
    }

    cin>>k>>m;

    for(int i=0;i<k.length();i++)
    {
        if(k[i]>='A'&&k[i]<='Z')
        {
            k[i]=k[i]-'A'+'a';
        }
    }


    for(int i=0,j=0;i<m.length();i++,j++)
    {
        if(j==k.length())
        {
            j=0;
        }
        if(m[i]>='a' && m[i]<='z')
        {
            for(int l=0;l<26;l++)
            {
                if(dic[1][k[j]-'a'][l]==m[i])
                {
                    cout<<char(l+'a');
                }
            }
        }
        else
        {
            for(int l=0;l<26;l++)
            {
                if(dic[0][k[j]-'a'][l]==m[i])
                {
                    cout<<char(l+'A');
                }
            }
        }
    }

    return 0;
}