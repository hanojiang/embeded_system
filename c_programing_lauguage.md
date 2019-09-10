[toc]
# c语言总结

## gcc 
### gcc 编译过程
* gcc -E 预处理
* gcc -S 编译，输出为汇编代码 /usr/lib/gcc/x86_64-pc-linux-gnu/9.1.0/cc1
* gcc -c　汇编，结果为二进制文件 as
* gcc -o　链接，结果为可执行文件  /usr/lib/gcc/x86_64-pc-linux-gnu/9.1.0/collect2
* -I 查找头文件的路径

### gcc 编译错误

* file not find 头文件包含的错误，正确区分头文件是在当前路径和系统路径中，<>和“”的区别
* 语法错误，中文输入法下输入的字符，空格，引号，逗号等
* undefined reference 链接错误，只有声明，没有定义
* multiple definition of function 对函数多次定义，导致链接错误

### 预处理

* #include 包含头文件
* #define 宏，替换，不进行语法检查，加括号，宏函数
* 条件编译　#ifdef #else #endif
* 预定义宏　\_\_FUNCTION\_\_ 函数名　\_\_LINE\_\_　行号 \_\_FILE\_\_　文件名
* gcc -D 通过命令传入预定义的宏参数，控制程序是debug还是release
* 带#号的，#define ABC(x) #x 字符串化，如ABC(aa) == "aa"
* 两个#号，连接 #define MYDAY(x) myday##x ，MYDAY(1) == myday1

## 语法部分

### 关键字

* 杂项 sizeof 确定内存占用 return 函数返回
* 数据类型
    * char 操作内存的最小单位
    * int 
    * short,long
    * unsigned, signed
    * float double
    * void
* 自定义数据类型
    * struct 基本数据类型的集合
    * union 共用内存，可以用于确定系统数据存储的大小端
    * enum 枚举中定义的变量类似与宏定义的常量，有区别的是，宏定义量在预处理阶段被替换，而枚举类型则是在编译阶段进行值的初始化
    * typedef

* 移位符号，对于有符号整数的右移操作，保留符号位，其他位置作以为操作；而对于无符号数，所有位进行移位操作