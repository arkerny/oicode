简明题意：

给定一个排列，求解一个与原排列每个位置上的数互不相同的排列，并且使这个排列的字典序尽可能小。

思路：

首先，考虑 $n=1$ 的情况，显然，当 $n=1$ 时必定无解，所以需要特判，当 $n=1$ 时输出 $-1$。

可以考虑开一个 $flag$ 数组，记录每个元素在新排列中的使用情况，从最小的元素开始枚举，使得所得排列的字典序最小，如有不符合位置要求的使用下一个数字跳过。

特别的，当不能新排列位置 $n$ 上的数不符合要求时，将新排列位置 $n$ 上的数与位置 $n-1$ 上的数交换即可。

代码如下：
``` cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define lowbit(_x) (_x&-_x)
#define clr(_arr,_val) memset(_arr,_val,sizeof(_arr));

int T;
int n,a[1010],flag[1010];

il void solve()
{
    clr(flag,0);
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n==1)
    {
        printf("-1\n");
        return ;
    }
    for(int i=1;i<=n;i++)
    {
        if(i==n-1&&flag[a[n]]==0)
        {
            printf("%d ",a[n]);
            flag[a[n]]=1;
        }
        for(int j=1;j<=n;j++)
        {
            if(j!=a[i]&&flag[j]==0)
            {
                printf("%d ",j);
                flag[j]=1;
                break;
            }
        } 
    }
    printf("\n");
    return ;
}

int main()
{
    scanf("%d",&T);
    while(T--)
    {
        solve();
    }
    return 0;
}
```



