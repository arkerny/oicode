#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

ll n;
map <ll,ll> book;

void work(int num)
{
    for(int i=2;i<=sqrt(num);i++)
    {
        while(num%i==0)
        {
            book[i]++;
            num/=i;
        }
    }
    if(num!=1)
    {
        book[num]++;
    }
}

int main()
{
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        work(i);
    }
    for(map<ll,ll>::iterator it=book.begin();it!=book.end();)
    {
        cout<<(it->first)<<"^"<<(it->second)<<" ";
        it++;
        if(it!=book.end())
        {
            cout<<"* ";
        }
    }
    return 0;
}
