题目已经给得比较清楚了，要求使第二列的方块数量尽可能少，那么分三种情况讨论：

1、$n \bmod 3 = 0$：

平均分配后是这样的

```
* * *
* * *
* * *
```

满足题目需求仅需将第三列的第一个“移到”第二列即可：

```
  *  
* *  
* * *
* * *
```

设 $tmp = \dfrac{n}{3}$，

可得第一列：$ans_1 = tmp$；

第二列：$ans_2 = tmp + 1$；

第三列：$ans_3 = tmp - 1$。

2、$n \bmod 3 = 1$：

平均分配后是这样的

```
* 
* * *
* * *
* * *
```

满足题目需求仅需将第一列与第三列的第一个均“移到”第二列即可：

```
  *  
  *  
* * 
* * *
* * *
```

设 $tmp = \dfrac{n - 1}{3}$，

可得第一列：$ans_1 = tmp$；

第二列：$ans_2 = tmp + 2$；

第三列：$ans_3 = tmp - 1$。

3、$n \bmod 3 = 2$：

平均分配后是这样的：

```
* * 
* * *
* * *
* * *
```

满足题目需求仅需将第三列的第一个“移到”第二列即可：

```
  *  
* *  
* * 
* * *
* * *
```

设 $tmp = \dfrac{n - 2}{3}$，

可得第一列：$ans_1 = tmp + 1$；

第二列：$ans_2 = tmp + 2$；

第三列：$ans_3 = tmp - 1$。

代码如下：

```cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

ll T;

void slove()
{
    ll n;
    cin>>n;
    ll tmp=n/3;
    if(n%3==0)
    {
        cout<<tmp<<' '<<tmp+1<<' '<<tmp-1<<endl;
    }
    else if(n%3==1)
    {
        cout<<tmp<<' '<<tmp+2<<' '<<tmp-1<<endl;
    }
    else
    {
        cout<<tmp+1<<' '<<tmp+2<<' '<<tmp-1<<endl;
    }
    return ;
}

int main()
{
    IOS
    cin>>T;
    while(T--)
    {
        slove();
    }
    return 0;
}

```
