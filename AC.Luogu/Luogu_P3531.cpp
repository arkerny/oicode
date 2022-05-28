#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

struct node
{
    queue <int> q;
};

string str1,str2;
int a[1000010],c[1000010],len;
ll ans;

map <char,node> m;

void msort(int s,int e)     //归并排序求逆序对
{
    if(s==e)
    {
        return;
    }
    ll mid=(s+e)/2;
    ll i=s,j=mid+1,k=s;
    msort(s,mid);
    msort(mid+1,e);
    while(i<=mid&&j<=e)
    {
        if(a[i]<=a[j])
        {
            c[k++]=a[i++];
        }
        else
        {
            c[k++]=a[j++];
            ans+=mid-i+1;
        }
    }
    while(i<=mid)
    {
        c[k++]=a[i++];
    }
    while(j<=e)
    {
        c[k++]=a[j++];
    }
    for(int l=s;l<=e;l++)
    {
        a[l]=c[l];
    }
}

int main()
{
    cin>>len>>str1>>str2;

    for(int i=0;i<len;i++)
    {
        m[str2[i]].q.push(i);
    }
    for(int i=0;i<len;i++)
    {
        a[i]=m[str1[i]].q.front();
        m[str1[i]].q.pop();
    }

    msort(0,len-1);
    cout<<ans;


    return 0;
}