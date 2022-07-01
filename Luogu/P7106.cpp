#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

char str[7];

int main()
{
    scanf("%s",str);
    cout<<"#";
    for(int i=1;i<=6;i++)
    {
        int tmp;
        sscanf(s+i,"%2x",&tmp);
        printf("%02X",255-tmp);
    }
    return 0;
}