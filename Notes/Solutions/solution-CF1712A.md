## 题意概要

使排列 $p$ 的前 $k$ 个数字的和最小，需要交换几次 $p$ 中的元素。

## 解题思路

加法满足交换律，使排列 $p$ 的前 $k$ 个数字的和最小，即使排列 $p$ 的前 $k$ 小的元素位于前 $k$ 个位置，如不在前 $k$ 个位置，则某一个的前 $k$ 小的元素前 $k$ 个位置故需与后面的元素交换，记一次交换次数。代码如下：

``` cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline

int T;
int n,k,a[110];
int ans;

void slove()
{
    ans=0;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=k;i++)
    {
        if(a[i]>k)
        {
            ans++;
        }
    }
    printf("%d\n",ans);
    return ;
}

int main()
{
    scanf("%d",&T);
    while(T--)
    {
        slove();
    }
    return 0;
}
```