# **`map`**

`map`主要用于资料一对一映射的情況，`map`內部与`set`相同，同样使用`RBT`实现。

`map`可以自动建立`key-value`的对应。`key` 和 `value`可以是任意类型。

**使用C++的STL中的`map`需要使用`#include<map>`头文件。**

### **C++的STL中的`map`定义及初始化：**

```c++
map <key_TYPE,value_TYPE> mp;    //定义map，key_TYPE为索引的数据类型，value_TYPE为相关联的数据de数据类型
```

### **C++的STL中的`map`的常用操作：**

#### **一、容量**

- `map`的大小：`mp.size();`
- `map`的最大容量：`mp.max_size();`
- `map`的判空：`mp.empty();`
- 返回`map`内`key`值为`k`的元素的个数：`mp.count(k); //key值不会重复，所以只能判断key是否出现（0或1）`

#### **二、修改**

- 向`map`内插入元素：`mp.insert( pair <key_TYPE,value_TYPE> (key,value) );`
- 删除`map`内键值为`key`值为`k`的元素：`mp.erase(k);`
- 删除`map`内定位器`iterator`指向的值：`mp.erase(iterator)`
- 删除`map`内定位器`start`到`end`的元素：`mp.erase(start,end);`
- 清空`map`中的元素：`mp.clear();`

#### **三、迭代器**

- `map`的开始指针：`mp.begin();`
- `map`的末尾指针：`mp.end(); //最后一个元素的下一个位置`
- 指向`key`值`k`：`map.find(k);`
- 指向`key`值不小于`k`的第一个元素：`map.lower_bound(k);`
- 指向`key`值大于`k`的第一个元素：`map.upper_bound(k);`

#### **四、元素的访问**

- 下标访问：`mp["string"]=233;`

