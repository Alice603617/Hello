#define _CRT_SECURE_NO_WARNINGS

//1.字面值常量
//2.const修饰的常变量

#include <stdio.h>
//int main()
//{
//	//30; //整型字面值常量
//	//3.14; //浮点型字面值常量
//	//'w'; //字符型字面值常量
//	//"hello bit"; //字符串型字面值常量
//	//const int a = 10; //10是整型字面值常量,a是常变量,const修饰a,本质是变量，不能修改，有常量的属性
//	//a = 20; //20是整型字面值常量,a是常变量,不能修改
//	//printf("%d\n", a);//需要头文件
//
//
//	const int n = 10;
//	int arr[10] = { 0 };
//
//	return 0;
//}

//#define MAX 100
//
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//
//	return 0;
//}

//枚举常量
//enum Color
//{
//	RED, //0
//	GREEN, //1
//	BLUE
//}; //枚举类型的定义，不需要空间
//
////性别
//enum Sex
//{
//	//枚举常量
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//
//int main()
//{
//	//三原色
//	//Red Green Blue
//	int num = 10;
//	enum Color c = RED;//创建c时向内存申请空间
//	//RED = 20;//枚举常量不能修改 ERROR
//	//MALE = 1;//枚举常量不能修改 ERROR
//	return 0;
//}

#include <string.h>

//int main()
//{
//	//char 字符类型
//	// ‘a’;
//	// char ch = 'a'; 
//	//字符串
//	//c语言中没有字符串类型
//	//"abcdef";
//	char arr1[] = "abcdef";//7,\0
//	char arr2[] = { 'a','b','c','d','e','f','\0'};//6
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//strlen求字符串长度，遇到\0结束
//
//
//	//int len = strlen("abc");//求字符串长度的一个函数，string length  库函数使用需要头文件#include <string.h>
//	//printf("%d\n", len);
//	
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);//%s 遇到\0结束
//	return 0;
//} 



//int main()
//{
//
//	//printf("abc\n");//\n换行(转义字符)
//	printf("abc\0def");//\0字符串结束标志
//
//	return 0;
//}

//转义字符
//三字母词
//??) --> ]
//??( --> [

//%d打印整型
//%c打印字符型
//%s打印字符串
//%f打印浮点型float
//%lf打印双精度浮点型double
//%zu打印sizeof类型

//int main()
//{
	//\n 换行
	//\t 水平制表符
	//\\ 代表\，防止他被解析成转义字符
	//\" 代表一个字符串内部的双引号
	//\' 代表字符常量’
	//\r 回车
	//\b 退格
	//\f 换页
	//\v 垂直制表符
	//\a 响铃
	//\? 代表?,在书写连续的问号时使用，防止他们被解析成三字母词
	//\ddd表示1-3个八进制数，如\130X
	//xdd表示1-2个十六进制数，如\xA9
	/*printf("hello \n bit\n");
	printf("hello \t bit\n");
	printf("hello \\ bit\n");
	printf("hello \" bit\n");
	printf("hello \' bit\n");*/
	//printf("%s\n","(are you ok\?\?)");
	//printf("c:\\test\\test.c");//打印路径用双斜杠
	//printf("%c\n", '\130');//\ddd 八进制数

	//printf("%d\n", strlen("qwer t"));//打印出6个字符
	//printf("%d\n", strlen("c:\test\628\test.c"));//打印出14个字符
	//return 0;
//}


//int main()
//{
//	int input = 0;
//	printf("a\n");
//	printf("b(1/0)");
//	scanf("%d",&input);
//	if(input == 1)
//	{
//		printf("c\n");
//	}
//	else
//	{
//		printf("d\n");
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while (line < 20)
//	{
//		printf("写代码:%d\n",line);
//		line++;
//	}
//	if(line >= 20)
//	{
//		printf("毕业\n");
//	}
//	else
//	{
//		printf("继续努力\n");
//	}
//	return 0;
//}

//求任意2个整数和
//函数
//int ADD(int x, int y)
//{
//	//int z = 0;
//	//z = x + y;
//	//return z;
//	return(x + y);
//}
//
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	//输入
//	scanf("%d %d", &n1, &n2);
//	//求和
//	//int sum = n1 + n2;
//	//函数求和
//	int sum = ADD(n1, n2);
//	int t1 = 100;
//	int t2 = 200;
//	int ret = ADD(t1, t2);//函数调用
//	//打印
//	printf("%d\n",sum);
//
//	return 0;
//}

//数组
//int main()
//{
//
//	int arr[10] = { 10,11,12,13,14,15,16,17,18,19 };//创建一个可以存放10个整数的数组
//	//ptintf("%d\n", arr[6]);//通过下标访问数组元素
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i = i + 1;
//	}
//	return 0;
//}

//作业1
//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *    \n");
//	printf("    *  *    \n");
//	return 0;
//}

//作业2
//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Lily    18     Female\n");
//	return 0;
//}

//作业3
//int main()
//{
//	printf("i lost my cellphone!\n");
//	return 0;
//}
//作业4
//int main()
//{
//	int a = 40;
//	int c = 212;
//	int r = (-8 + 22) * a - 10 + c / 2;
//	printf("%d\n", r);
//
//	return 0;
//}

//作业5
//int main()
//{
//	//不支持初始化
//	//int arr[n] = { 1 };
//
//	return 0;
//}
//作业6
//函数Max
//int Max(int x, int y)
//{
//	if(x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//求两个整数的较大值
//	int r = Max(a, b);
//
//	printf("%d\n", r);
//
//	return 0;
//}


//作业7计算y的值
//int main()
//{
//	//输入
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//	//输出
//	if (x > 0)
//	{
//		y = -1;
//	}
//	else if(x==0)
//	{
//		y = 0;
//	}
//	else
//	{
//		y = 1;
//	}
//
//	printf("%d\n", y);
//	return 0;
//}


//操作符
//int main()
//{
//	//int a = 7 / 2;
//	//int b = 7 % 2;//取模，取余
//	//printf("%d\n", a);//3
//	//printf("%d\n", b);//1
//	// / 除号的两端都是整数，结果是整数，如果两端有一个浮点数就执行浮点数除法
//	float c = 7 / 2.0;
//	printf("%.2f\n", c);//3.5
//	int d = 7 % -2;//取模操作符两端必须是整数
//
//	return 0;
//}

//赋值
//int main()
//{
//	int a = 0;//初始化
//	a = 20;//赋值
//
//	/*a = a + 3; == a += 3;*/
//
//	return 0;
//}

//C语言中，0代表假
//! 反转真假
//int main()
//{
//	int flag = 0;
//	if (!flag)
//	{
//
//		printf("hehe\n");
//	}
//
//
//	return 0;
//}

//sizeof是单目操作符

//int main()
//{
	//int a = 10;
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof a);
	////printf("%d\n", sizeof int);错误

	//int arr[10] = { 0 };
	//printf("%d\n", sizeof(arr));//40 计算是整个数组的大小，单位是字节
	//printf("%d\n", sizeof(arr[0]));//4
	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));//10 - 数组的元素个数



	//int a = 10;
	////int b = a++;//先使用后++
	////int b = a;a=a+1;
	////int b = ++a;//先++，后使用
	////a=a+1;b=a
	////int b = a--;
	//int b = --a;
	////a = a-1;b=a
	//printf("%d\n", b);//10 11
	//printf("%d\n", a);//11 11
	 
	//强制类型转换
	/*int a = (int)3.14;
	printf("%d\n", a);*/

	/*return 0;
}*/


//int main()
//{
//	int a = 10;
//	if (a == 0)//=赋值操作符,==关系操作符
//	{
//		printf("hehe\n");
//	}
//	return 0;
//
//}


//int main()
//{
	//&& 逻辑与 - 并且
	//|| 逻辑或 - 或者
	/*int a = 0;
	int b = 0;
	if(a && b)
	{
		printf("hehe\n");
	}

	int a = 0;
	int b = 0;
	if (a || b)
	{
		printf("hehe\n");
	}*/

//	int a = 10;
//	int b = 20;
//
//	int r = (a > b) ? a : b;//三目运算符
//
//
//	return 0;
//}


//逗号表达式即逗号隔开的一串表达式
//逗号表达式从左到右依次计算每个表达式，整个表达式的结果是最后一个表达式的结果

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	int d = (c = a - 2, a = b + c, c - 3);//逗号表达式
//	printf("%d\n",d);//5
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5 };
//	int n = 3;
//	arr[n] = 100;//[]就是下标引用操作符 arr和3就是下标引用操作符的两个操作数
//	return 0;
//}


//函数调用操作符
//int Add(int x, int y)
//{
//	return (x + y);
//}
//
//int main()
//{
//	int sum = Add(2, 3);//Add(a,b)函数调用操作符,Add,2,3都是()的操作数
//	return 0;
//}

