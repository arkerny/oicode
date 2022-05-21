#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define fo(v,a,b) for(ll v=a;v<=b;v++)
#define fr(v,a,b) for(ll v=a;v>=b;v--)

#define foo(v,a,b,c) for(ll v=a;v<=b;v+=c)
#define frr(v,a,b,c) for(ll v=a;v>=b;v-=c)

#define il inline

stack <int> st;

char book[36]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

ll n,p,t;

void fun(ll n,ll p)
{
    while(n)
    {
        t=n%p;
        n/=p;
        if(t<0)
        {
            t-=p;
            n+=1;
        }
        st.push(t);
    }
    return ;
}

int main()
{
    // freopen("1.in","r",stdin);
    // freopen("1.out","w",stdout);
    
    cin>>n>>p;
    cout<<n<<"=";
    fun(n,p);
    while(!st.empty())
    {
        cout<<book[st.top()];
        st.pop();
    }
    cout<<"("<<"base"<<p<<")";

    
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}
