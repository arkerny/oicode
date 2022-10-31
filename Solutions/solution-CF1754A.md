简明题意：给定 $\texttt{QA}$ 串，要求每遇到一个 $\texttt{Q}$ 必须在后文中有至少一个 $\texttt{A}$ 作为相应的匹配。求给定的 $\texttt{QA}$ 串是否满足要求。

贪心思路：满足要求时每一个 $\texttt{Q}$ 最少需要一个 $\texttt{A}$ 来匹配，即以每一个 $\texttt{Q}$ 对应一个 $\texttt{A}$ 来计。

考虑使用栈来进行模拟，代码如下，模拟过程的解读见注释：
``` cpp
#include<bits/stdc++.h>
using namespace std;
int T;
int n;
char str[110];
void solve()
{
    scanf("%d",&n);
    scanf("%s",str+1);
    stack<char> s;
    for(int i=1;i<=n;i++)
    {
        if(str[i]=='Q')
        {
            s.push(str[i]);     //是客户的询问，入栈。
        }
        else
        {
            if(s.empty())       //栈空，即这是对于一次询问的第二条回答
            {
                continue;
            }
            s.pop();            //回答了一个问题，询问出栈
        }
    }
    if(s.empty())               //如果有问题剩余
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
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