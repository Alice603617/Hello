#define _CRT_SECURE_NO_WARNINGS


//typedef unsigned int uint;
//
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//
//
//int main()
//{
//	unsigned int num = 0;
//	uint num2 = 1;
//	struct Node n;
//		Node n2;
//	return 0;
//}


//static
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数

#include <stdio.h>

//void test()
//{
	//static int a = 1;
	//1.static修饰局部变量时，局部变量出了作用域，不会被销毁，而是保存在静态区，生命周期是整个程序运行期间，影响了变量的生命周期，生命周期变长了，和程序的生命周期一样长
	//本质上，static修饰局部变量时，改变了局部变量的存储位置，由栈改为静态区
	//栈区存放局部变量，生命周期是函数调用期间（函数调用完毕，局部变量就被销毁）
	//静态区存放静态变量，生命周期是整个程序运行期间（程序结束，静态变量才被销毁）
	//堆区存放动态分配的内存，生命周期由程序员控制
	//a++;
	//printf("%d", a);
//}

//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}


//void test()//void -> 不需要任何返回
//{
//	//执行任务
//	printf("hello world\n");
//}


//static修饰全局变量
//1.全局变量是具有外部链接属性的
//编译+链接-->可执行程序
//static修饰全局变量时，全局变量的外部链接属性变成内部链接属性，其他源文件（.c）就不能再使用到这个全局变量。
//在使用全局变量时感觉作用域变小了。


//声明外部符号
//extern int g_val;//extern声明外部符号
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}


//static修饰函数
//int Add(int x, int y)
//{
//	return x + y;
//}

//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);
//	printf("%d\n", z);
//
//	return 0;
//}

//int main()
//{
//	//寄存器变量
//	register int num = 3;//建议:将num存放在寄存器中
//
//	return 0;
//}


////define定义标识符常量
//#define  NUM 100
//
//
////define定义宏
////宏是有参数的，宏是完成替换的
////宏在预处理阶段进行替换
//#define ADD(x,y) ((x)+(y))
//	//宏名 宏参数  宏体
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	/*printf("%d\n", NUM);
//	int n = NUM;
//	printf("%d\n", n);
//	int arr[NUM] = { 0 };*/
//
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//
//	return 0;
//}

//指针
//int main()
//{
	//int a = 10;//向内存申请4个字节，存储10
	//&a;//取地址运算符，获取变量a的地址
	//printf("%p\n", &a);//0x61ff1c//%p:以16进制的形式输出地址
	//int* p = &a;//指针变量p存储变量a的地址,p是指针变量,*说明p是一个指针，int说明p指向的对象是int类型
	//*p = 20;//解引用操作符，意思就是通过p中存放的地址找到p所指向的对象,*p表示p所指向的对象
	//printf("%d\n", a);

	/*char ch = 'w';
	char* pc = &ch;*/
	//指针变量用来存放别人的地址
	//指针变量的类型决定了指针变量所指向的对象的类型



	//return 0;
//}


//指针类型大小

//int main()
//{
//	//不管是什么类型都是在创建指针变量，指针变量用来存放大小，一个指针变量大小取决于一个地址存放时需要多大空间
//	//32位操作系统中，一个地址占4个字节（byte），所以指针变量的大小都是4个字节
//	//64位操作系统中，一个地址占8个字节，所以指针变量的大小都是8个字节
//	printf("%d\n", sizeof(char*));//8
//	printf("%d\n", sizeof(short*));//8
//	printf("%zu\n", sizeof(int*));//8
//	return 0;
//}


//结构体
//struct Stu//struct 结构体标签
//{
//	//成员
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	//->
//	//结构体指针变量->成员名
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);//结构体指针访问成员的另一种方式
//}
//
//int main()
//{
//	struct Stu s = { "zhangsan",20,"nan","16628191719" };
//	
//	//结构体对象.成员名
//	//printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	printf(&s);
//	return 0;
//}





