# **动态数组（vector）**

```
 Author:Hakcer_Nick(范朋远)
```

**数组**是一种基本的数据结构，有**静态数组**和**动态数组**两种类型。

**`vector`是C++的STL中的动态数组**。就像数组一样，`vector`也采用的连续存储空间来存储元素。也就是意味着可以采用下标对`vector`的元素进行访问，和数组一样高效。但是又不像数组，它的大小是可以动态改变的，而且它的大小会被容器自动处理。

**使用C++的STL中的`vector`需要使用`#include<vector>`头文件。**

### **C++的STL中的`vector`定义及初始化：**

```c++
vector <TYPE> vec;              //定义vector，TYPE为数据类型
vector <TYPE> vec(MAXN);        //定义初始大小为MAXN的vector，TYPE为数据类型
vector <TYPE> vec(MAXN,NUM);    //定义初始大小为MAXN且值都是NUM的vector，TYPE为数据类型
```

### **C++的STL中的`vector`的常用操作：**

#### **一、容量**

- `vector`的大小：`vec.size();`
- `vector`的最大容量：`vec.max_size();`
- 更改`vector`的大小：`vec.resize();`
- `vector`的真实大小：`vec.capacity();`
- `vector`的判空：`vec.empty();`
- 减少`vector`的大小到满足元素所占存储空间的大小：`vec.shrink_to_fit();`

#### **二、修改**

- 在`vector`的末尾添加元素：`vec.push_back(item);`
- 在`vector`的末尾删除元素：`vec.pop_back();`
- 在`vector`的任意位置插入元素：`vec.insert();`
- 在`vector`的任意位置删除元素：`vec.erase();`
- 清空`vector`中的元素：`vec.clear();`

#### **三、迭代器**

- `vector`的开始指针：`vec.begin();`
- `vector`的末尾指针：`vec.end(); //指向最后一个元素的下一个位置`

#### **四、元素的访问**

- 下标访问：`vec[1];`
- 访问第一个元素：`vec.front();`
- 访问最后一个元素：`vec.back();`