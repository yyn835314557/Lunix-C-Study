# Lunix-C-Study
Study Lunix C by myself

***

> 
```
gcc helloworld.c
./a.out
gcc -o helloworld.i helloworld.c -E
```
b: 向后移动一个单词，标点也算单词
w: 向前移动一个单词，3w
$: 行尾 3%
^: 行首 3^
+: 下一行行首
-: 下一行行尾

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

 - 结构体(联合体):
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

 - 动态数据结构:(元素的地址不连续 )
 	 - 静态链表：
 	 - 动态链表：程序执行过程中从无到有的建立链表，一个一个开辟新节点，关系

 - 位运算符：
 	 - &: 按位与(整形，字符形，逐位进行运算)
 	 	 - 迅速清零(全置为零)
 	 	 - 保留指定位置(全置为1)
 	 	 - 奇偶性
 	 - |: 按位或(将参与运算的两个数据进行逻辑或运算)
 	 	 - 设定数据的指定位
 	 - ^: 按位异或(将参与运算的两个数据按对应的二进制数逐位进行逻辑异或运算，即互斥为真) 
 	 	 - 定位反转
 	 	 - 数值交换
 	 - ~: 按位取反(唯一单目运算符，其他都是双目运算符)右结合性 0->1,1->0
 	 - <<: 左移:将数据对应的二进制值逐位左移若干位(最高位舍弃，低位补零)， 2^n
 	 	 - 注意符号，防止溢出
 	 	 - 实现二倍乘(速度较快)
 	 - >>: 右移
 	 	 - 根据符号位，(0)补零或者补一,1根据计算机类型来定

 - 递归函数:
  		 - 递归函数
  		 - 递归原理
  	 > 递推
  	 从小往大(for 循环)
