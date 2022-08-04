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

const double PI = 3.141593;

int main()
{
    int T;
    scanf("%d",&T);
    if(T==1)
    {
        printf("I love Luogu!");
    }
    else if(T==2)
    {
        printf("6 4");
    }
    else if(T==3)
    {
        printf("3\n12\n2");
    }
    else if(T==4)
    {
        printf("166.667");
    }
    else if(T==5)
    {
        printf("15");
    }
    else if(T==6)
    {
        cout<<sqrt(6*6+9*9);
    }
    else if(T==7)
    {
        printf("110\n90\n0");
    }
    else if(T==8)
    {
        cout<<PI*10<<endl;
        cout<<PI*25<<endl;
        cout<<4*PI*125/3.0;
    }
    else if(T==9)
    {
        printf("22");
    }
    else if(T==10)
    {
        printf("9");
    }
    else if(T==11)
    {
        cout<<100/3.0;
    }
    else if(T==12)
    {
        printf("13\nR");
    }
    else if(T==13)
    {
        double V1=4*PI*64/3.0,V2=4*PI*1000/3.0;
        cout<<(int)pow(V1+V2,1/3.0);
    }
    else if(T==14)
    {
        printf("50");
    }
    return 0;
}
