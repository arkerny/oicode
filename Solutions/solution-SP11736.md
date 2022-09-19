题意翻译不是特别清楚，简而言之就是给出一个数 $ n $ ，求 $ n! $ 分解质因数以后的结果。

对于 $ n! $ 分解质因数，可以将 $ n! $ 中的每一个数分别分解质因数，存入一个 $ book $ 中，待 $ n! $ 中的每一个数分别分解完成后统一输出。

分解每个数的质因数的代码如下：

```cpp
void work(int num)
{
    for(int i=2;i<=sqrt(num);i++) //num的最大质因数小于num开根号
    {
        while(num%i==0)
        {
            book[i]++; //记录质因数
            num/=i;
        }
    }
    if(num!=1) //剩余的num是质数
    {
        book[num]++; //记录num
    }
}
```

这道题要求使用如下的格式输出：

```
2^8 * 3^4 * 5^2 * 7^1
```

正解代码如下：

```cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

ll n;
map <ll,ll> book; //使用map存储

void work(int num)
{
    for(int i=2;i<=sqrt(num);i++) //num的最大质因数小于num开根号
    {
        while(num%i==0)
        {
            book[i]++; //记录质因数
            num/=i;
        }
    }
    if(num!=1) //剩余的num是质数
    {
        book[num]++; //记录num
    }
}

int main()
{
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        work(i);
    }
    for(map<ll,ll>::iterator it=book.begin();it!=book.end();) //遍历map
    {
        cout<<(it->first)<<"^"<<(it->second)<<" ";
        it++; //map下一个元素
        if(it!=book.end()) //如果下一个不是最后一个
        {
            cout<<"* "; //按格式输出
        }
    }
    return 0;
}

```