#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


//int main() {

	/*int a = 10;
	if (a == 3){
		printf("haha\n");
	}*/

	//int age = 10;
	//if (age > 18) //只有一条语句时，可以省略大括号
	//{ 
	//	printf("You are an adult.\n");
	//	printf("Welcome to the club!\n");
	//}
	//else 
	//{
	//printf("You are a minor.\n");
	//}

	/*int age = 10;
	scanf("%d", &age);

	if (age < 18)
		printf("青少年\n");
	else if(age >= 18 && age<28)
		printf("青年\n");
	else if (age >= 28 && age < 55)
		printf("中年\n");
	else if(age >= 55 && age <= 100)
		printf("老年\n");
	else
		printf("输入错误\n");*/



	//return 0;
//}



//int main() 
//{
//	int age = 10;
//	if (age < 18)
//		printf("未成年\n");
//	else
//	{
//		printf("成年人\n");
//		printf("欢迎加入俱乐部\n");
//	}
//
//	return 0;
//}


//int main() 
//{
//	int a = 1;
//	int b = 2;
//	if (a == 2)
//	{
//		if(b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//		
//	return 0;
//}

//练习1：判断一个数是奇数还是偶数

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//判断
//	if (num % 2 == 1)
//		printf("奇数\n");
//	else
//		printf("偶数\n");
//	return 0;
//}

//练习2：输出1—100之间所有的奇数

//int main()
//{
//	int i = 1;
//	/*for (i; i <= 100; i++)
//	{
//		if(i % 2 ==1)
//			printf("%d\n", i);
//	}*/
//	/*while (i <= 100)
//	{
//		if(i % 2 == 1)
//			printf("%d\n", i);
//	}*/
//	while (i <= 100)
//	{
//		printf("%d\n", i);
//		//i = i + 2;
//		i += 2;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//只能是整型表达式;case入口，不能穿透;break跳出switch
//	{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("workday\n");
//			break;
//		case 6:  
//		case 7:
//			printf("weekend\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//	
//	}
//
//	return 0;
//}


//练习3：
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;//m = 3
//	case 2:n++;//n = 2
//	case 3:
//		switch (n)//n = 2
//		{
//		case 1:n++;
//		case 2:m++; n++;//m = 4,n = 3
//			break;
//		}
//	case 4:
//		m++;//m = 5
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}

//while循环
//break用于永久的终止循环，continue跳过本次循环后面的代码，直接进行下一次循环判断

//int main()
//{
//	//while(条件表达式)
//	//{
//		//循环体
//	//}
//
//	int i = 1;//初始化表达式
//
//	while(i <= 10)//条件表达式
//	{
//		i++;
//		if( 5 == i)
//			//break;//跳出循环
//			continue;//结束本次循环，进入下一次循环
//
//		printf("%d", i);//循环体
//		//i++;//迭代表达式
//	}
//	//输出结果：2,3,4,6,7,8,9,10,11
//	return 0;	
//
//}

//int main()
//{
//	//int ch = 0;
//	//while(getchar())
//	//int ch = getchar();//getchar从键盘获取一个字符
//	//printf("%c\n", ch);//1
//	//putchar(ch);//2
//
//	//int ch = 0;
//	//while
//
//	//eg:
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);//scanf和getchar混用时要注意缓冲区
//	//
//	//getchar();//吸收回车\n，否则会被下面的getchar接收(清除不完全)
//	int ch = 0;
//	while ((ch = getchar()))//循环清除字符，直到遇到回车为止
//	{
//		;
//	}
//	printf("请再次输入密码：\n");
//	int ret = getchar();
//	if('Y' == ret)
//		printf("密码正确\n");
//	else
//		printf("密码错误\n");
//
//	return 0;
//}

//作业1：//'a'-asclli码值97
//int main()
//{
//	int arr[] = {73,32,99,97,110,32,100,111,32,105,116,33};
//	int i = 0;
//	//sizeof(arr):计算数组的总字节数，sizeof(arr[0]):计算总数组元素的大小
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (i < sz)
//	{
//		printf("%c", arr[1]);
//		i++;
//	}
//
//	return 0;
//}


//作业2：
//int main()
//{
//	//输入数据
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%4d%2d%2d", &year, &month, &day);
//	//输出
//	printf("yser=%d\n", year);
//	printf("month=%02d\n", month);//补全两位eg:01
//	printf("day=%02d\n", day);
//	return 0;
//}

//作业3：
//int main()
//{
//	//创建变量
//	int id = 0;
//	float c = 0.0f;
//	float e = 0.0f;
//	float m = 0.0f;
//
//	//输入学号以及3科成绩，学号和成绩之间用英文分号隔开，成绩之间用英文逗号隔开。
//	scanf("%d;%f,%f,%f", &id, &c, &e, &m);
//	//输出学号，3科成绩
//	printf("The each subject score of NO. %d is %.2f, %.2f, %.2f.\n",id, c, e, m);//.2f小数点保留两位
//
//	return 0;
//}

//作业4:
//int main()
//{
//	int n = printf("Hello world!");//不可在最后加\n因为\n算是一个字符，结果会加上\n。
//	printf("\n%d\n", n);
//	return 0;
//}

//作业5：\转义字符
//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout << \"Hello world!\"<< endl;\n");
//	return 0;
//}


//作业6：找到最大数
//方案一：
//int main()
//{
//	//定义
//	int arr[4] = { 0 };
//	int i = 0;
//	//输入一行4个整数，用空格分开。
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	//找最大值
//	//假设第一个数是最大值
//	int max = arr[0];
//	i = 1;
//	while (i < 4)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	//输出一行，一个整数，为输入的4个整数的最大整数
//	printf("%d\n", max);
//	return 0;
//}
//方案二：
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int max = 0;
//	scanf("%d", &max);//假设第一个数是最大值
//
//	while (i < 4)
//	{
//		scanf("%d", &n);
//		if (n > max)
//		{
//			max = n;
//		}
//		i++;
//	}
//	printf("%d\n", max);
//	return 0;
//}

//作业7：计算球的体积
//int main()
//{
//	//定义变量
//	double r = 0.0f;
//	double  v = 0.0f;
//	//输入球的半径
//	scanf("%lf", &r);
//	//计算
//	v = 4/3.0 * 3.1415926 * r * r * r;
//
//	printf("V=%.3lf\n", v);
//	return 0;
//}

//for循环(表达式1;表达式2;表达式3)
//循环语句；
//打印1-10
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if(i == 5)
//			//break;//跳出循环
//			continue;//结束本次循环，进入下一次循环
//
//		printf("%d ", i);//循环体
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for(j = 0; j < 3; j++)//省略j=0,只输出3个*
//			printf("*\n ");
//	}
//
//	//int i = 0;
//	//for (int i = 0; i < 10; i++)//C99标准后允许在for循环中定义变量
//	//{
//	//	printf("%d ", i);
//	//}
//	return 0;
//}


//do_while循环:

//int main()
//{
//	int i = 1;
//	do
//	{
//		//i++;
//		if(i == 5)
//			//break;//跳出循环
//			continue;//结束本次循环，进入下一次循环
//
//		printf("%d ", i);//i=5时跳过此段代码
//		i++;
//	} 
//	while (i <= 10);
//	
//
//	return 0;
//}



//练习：
//1计算n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//
//	printf("%d\n", ret);
//
//	return 0;
//}


//计算1！+2！+3！+...+10！
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int ret = 1;
//
//	//for(i = 1; i <= 10; i++)
//	//{
//	//	ret = 1;//每次计算阶乘前都要把ret初始化为1
//	//	for (j = 1; j <= i; j++)
//	//	{
//	//		ret = ret * j;
//	//	}
//	//	sum = sum + ret;
//	//}
//
//
//	//优化：
//	for (i = 1; i <= 3; i++)
//	{
//		ret = ret * i;//计算阶乘
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}



//练习2：在一个有序数组中查找某个数,折半查找
//int main()
//{
//	int arr[ ] = {1,2,3,4,5,6,7};
//	int k = 5;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left+right) / 2;
//
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if(arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//
//
//	return 0;
//}



//折半查找（二分查找）
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 4;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)//必须有等号
//	{
//		int mid = left + (right - left) / 2; //防止(left+right)溢出
//		int mid = (left + right) / 2;//必须在循环内部
//			if (arr[mid] < k)
//			{
//				left = mid + 1;
//			}
//			else if(arr[mid] > k)
//			{
//				right = mid - 1;
//			}
//			else
//			{
//				printf("找到了,下标是：%d\n", mid);
//				break;
//			}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}



//练习3：编写代码，演示多个字符从两端移动，向中间汇聚
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "*****************";
//
//	//char buf[] = "abc"
//	int left = 0;
//	int right = strlen(arr2)-1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//休眠1秒
//		system("cls");//清屏,system是一个库函数，可以调用操作系统命令
//		left++;
//		right--;
//		
//	}
//	
//	printf("%s\n", arr2);
//
//	return 0;
//}


//练习4：
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);//数组名本来就是地址，不需要取地址
//		if (strcmp(password, "123456") == 0)//比较两个字符串是否相等不能使用==，而是应该使用库函数：strcmp,如果返回值是0，表示两个字符串相等
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入\n");
//		}
//		if (i == 3);
//		{
//			printf("登录失败\n");
//		}
//
//	}
//	
//
//	return 0;
//}

//猜数字游戏：(1-100)
//猜数字，提示大了还是小了，直到猜中为止
//时间戳：

//#include<stdlib.h>
//#include<time.h>
//
//void menu()
//{
//	printf("**************************\n");
//	printf("*****   1.play  *****\n");
//	printf("*****   0.exit  ******\n");
//	printf("**************************\n");  
//}
//
//void game()
//{
//	int guess = 0;
//	//srand((unsigned int)time(NULL));//设置随机数种子
//	//RAND_MAX;//32767
//	//1.生成随机数
//	int ret = rand() % 100 + 1;//生成一个随机数,范围是1-100
//	//printf("随机数是：%d\n", ret);
//	//2.猜数字
//	while(1)
//	{
//		printf("请猜数字：");
//		scanf("%d", &guess);
//		if(guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if(guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//
//
//}
//
////指针
////int *p = NULL;
////int a = 0;
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//设置随机数种子
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				game();//猜数字的整个逻辑
//				printf("游戏开始\n");
//				break;
//			case 0:
//				printf("游戏结束\n");
//				break;
//			default:
//				printf("选择错误，请重新选择\n");
//				break;
//		}
//	} while (input);
//
//
//	return 0;
//}





















