# **`set`**

`set`就是集合，在C++的STL中，`set`的内部使用`RBT`（`Red-Black Tree`，红黑树，一种高效的平衡二叉搜索树）来实现，集合中的每个元素只出现一次，并且是排好序的。访问元素的时间复杂度是$\Theta (logn)$，非常高效。

顺序容器包括`vector`、`list`、`array`、`string`，所有顺序容器都提供了快速顺序访问元素的能力。

关联容器包括`set`、`map`。

关联容器和顺序容器有着根本的不同：关联容器中的元素是按关键字来保存和访问的。与之相对，顺序容器中的元素是按它们在容器中的位置来顺序保存和访问的。

**使用C++的STL中的`set`需要使用`#include<set>`头文件。**

### **C++的STL中的`set`定义及初始化：**

```c++
set <TYPE> st;    //定义set，TYPE为数据类型
```

### **C++的STL中的`set`的常用操作：**

#### **一、容量**

- `set`的大小：`st.size();`
- `set`的最大容量：`st.max_size();`
- `set`的判空：`st.empty();`
- 返回`set`内键值为k的元素的个数：`st.count();`

#### **二、修改**

- 向`set`内插入元素：`st.insert(item);`
- 删除`set`内键值为`k`的元素：`st.erase(k);`
- 删除`set`内定位器`iterator`指向的值：`st.erase(iterator)`
- 删除`set`内定位器`start`到`end`的元素：`st.erase(start,end);`
- 清空`set`中的元素：`st.clear();`

#### **三、迭代器**

- `set`的开始指针：`st.begin();`
- `set`的末尾指针：`st.end(); //最后一个元素的下一个位置`
- 指向键值`k`：`st.find(k);`
- 指向键值不小于`k`的第一个元素：`st.lower_bound(k);`
- 指向键值大于`k`的第一个元素：`st.upper_bound(k);`



