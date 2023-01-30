#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

char a[5][5],t[5][5];

void work(int x, int y)
{
    if(t[x][y]=='-')
    {
        t[x][y] = '+';
    }
    else
    {
        t[x][y]='-';
    }
    for(int i=0;i<4;i++)
    {
        if(t[x][i]=='-')
        {
            t[x][i]='+';
        }
        else
        {
            t[x][i]='-';
        }
        if(t[i][y]=='-')
        {
            t[i][y]='+';
        }
        else
        {
            t[i][y]='-';
        }
    }
}

bool check()
{
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            if(t[i][j]=='+')
                return false;
    return true;
}

int main()
{
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            cin>>a[i][j];

    for(int i=0;i<(1<<16);i++)
    {
        ll cnt=0;
        memcpy(t,a,sizeof(t));
        for(int j=0;j<16;j++)
            if(i>>j&1)
            {
                cnt++;
                int x=j/4,y=j%4;
                work(x,y);
            }
        if(check())
        {
            cout<<cnt<<endl;
            for(int j=0;j<16;j++)
                if(i>>j&1)
                    cout<<j/4+1<<' '<<j%4+1<<endl;
            break;
        }
    }

    return 0;
}