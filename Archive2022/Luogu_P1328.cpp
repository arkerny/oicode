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

int n,na,nb,x,y,p,q;
int a[10000],b[10000];

int main()
{
    scanf("%d %d %d",&n,&na,&nb);
    fo(i,1,na)
    {
        scanf("%d",&a[i]);
    }
    fo(i,1,nb)
    {
        scanf("%d",&b[i]);
    }
    fo(i,1,n)
    {
        p=p%na+1;
        q=q%nb+1;
        switch(a[p])
        {
            case 0: 
            {
                switch(b[q])
                {
                    case 1:
                    {
                        y++;
                        break;
                    }
                    case 2:
                    {
                        x++;
                        break;
                    }
                    case 3:
                    {
                        x++;
                        break;
                    }
                    case 4:
                    {
                        y++;
                        break;
                    }
                };
                break;
            }
            case 1:
            {
                switch(b[q])
                {
                    case 0:
                    {
                        x++;
                        break;
                    }
                    case 2:
                    {
                        y++;
                        break;
                    }
                    case 3:
                    {
                        x++;
                        break;
                    }
                    case 4:
                    {
                        y++;
                        break;
                    }
                };
                break;
            }
            case 2:
            {
                switch(b[q])
                {
                    case 0:
                    {
                        y++;
                        break;
                    }
                    case 1:
                    {
                        x++;
                        break;
                    }
                    case 3:
                    {
                        y++;
                        break;
                    }
                    case 4:
                    {
                        x++;
                        break;
                    }
                };
                break;
            }
            case 3:
            {
                switch(b[q])
                {
                    case 0:
                    {
                        y++;
                        break;
                    }
                    case 1:
                    {
                        y++;
                        break;
                    }
                    case 2:
                    {
                        x++;
                        break;
                    }
                    case 4:
                    {
                        x++;
                        break;
                    }
                };
                break;
            }
            case 4:
            {
                switch(b[q])
                {
                    case 0:
                    {
                        x++;
                        break;
                    }
                    case 1:
                    {
                        x++;
                        break;
                    }
                    case 2:
                    {
                        y++;
                        break;
                    }
                    case 3:
                    {
                        y++;
                        break;
                    }
                };
                break;
            }
        }
    }
    cout<<x<<" "<<y;
}