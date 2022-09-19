（洛谷怎么可以这样教我们打牌……

如题意，判断是否存在四张相同的牌以及王炸。

牌的顺序已经给出，故我们不需要考虑给牌排序，只需在手牌的字符串中寻找王炸或连续的四个相同数字即可，这边采用 `str.find()` 函数来解决。

C++ 的 String 类里面提供了 `str.find()` 函数来帮助我们寻找某一个字符串。在无法找到时会返回值 `string::npos`。具体形式详见代码以及注释：

``` cpp
#include<bits/stdc++.h>
using namespace std;
int T;
string str,book[14]={"DX","2222","AAAA","KKKK","QQQQ","JJJJ","TTTT","9999","8888","7777","6666","5555","4444","3333"};  //打表，记录每一种炸的形式
int main()
{
    scanf("%d",&T);
    while(T--)
    {
        cin>>str;
        bool flag=0;
        for(int i=0;i<=13;i++)  //遍历每一种炸的形式
        {
            if(str.find(book[i])!=string::npos) //如果找到了
            {
                flag=1; //标记
                break;  //退出
            }
        }
        if(flag)    //输出
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}

```