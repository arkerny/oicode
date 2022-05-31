#include<iostream>
using namespace std;
int main()
{
    long long a[15],sg,sum;
    for(int i=1;i<=10;i++)
    {
        cin>>a[i];
    }
    cin>>sg;
    sg+=30;
    for(int i=1;i<=10;i++)
    {
        if (a[i]<=sg)
        {
            sum++;
        }
        
    }
    cout<<sum;
    return 0;
}