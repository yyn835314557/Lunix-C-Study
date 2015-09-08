# Lunix-C-Study
Study Lunix C by myself

***

> 
```
gcc helloworld.c
./a.out
gcc -o helloworld.i helloworld.c -E
```

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

 - 公用体：
 
