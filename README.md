# Lunix-C-Study
Study Lunix C by myself

***

> 
```
gcc helloworld.c
./a.out
gcc -o helloworld.i helloworld.c -E
```
$:行尾
^:行首
+:下一行行首
-:下一行行尾

 - 基本概念:
	- 预处理
		 - .c文件 -> .i文件
		 - 展开头文件（#include<studio.h>）
		 - 宏替换(认为是字符串替换不是数字) 常量，数组buffer
		 - 宏函数(不考虑C的语法,不考虑类型，不用定义返回值)
		 - 条件编译(不同的目标，编译；程序移植，调试)
	- 编译
		 - .i文件 -> .s文件
	- 汇编
		 - .s文件 -> .o文件
	- 链接
		 - .o文件 -> 可执行文件

 - 结构体:
  	 - 三种定义:(省略struct 后面的名字)
  	 - 初始化，引用；
  	 - 结构体指针:
  	 - struct对象字节对齐，占用空间大小，采用快速对齐，空间换取时间的方式 (偏移量 = 实际地址 - 首地址)
  	 - struct = 最后一个成员的偏移量 + 最后一个成员的大小 + 末尾填充字节数
  	 - 偏移量时成员大小的成熟倍，不是补足
  	 - 最宽基本类型的大小的整数倍(4 + 8 = 12)
  	 - `printf("%lu\n",sizeof(struct data));`
     
 - 公用体(联合体)：
 	 - 所有成员共享一块内存地址，同一时刻仅仅存储一个成员
 	 - 节约开销
 	 - 后面数据覆盖前面数据，初始化列表只有一个常量
 	 - 占用空间为所有成员中所占最长的那个
 	 - `printf("%p\n,%p\n,%p\n",&data_1.d,&data_1.e,&data_1.f);`

 - 动态数据结构: