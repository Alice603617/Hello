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

int main()
{
	//int ch = 0;
	//while(getchar())
	//int ch = getchar();//getchar从键盘获取一个字符
	//printf("%c\n", ch);//1
	//putchar(ch);//2

	//int ch = 0;
	//while

	//eg:
	char password[20] = { 0 };
	printf("请输入密码：\n");
	scanf("%s", password);//scanf和getchar混用时要注意缓冲区
	//
	//getchar();//吸收回车\n，否则会被下面的getchar接收(清除不完全)
	int ch = 0;
	while ((ch = getchar()))//循环清除字符，直到遇到回车为止
	{
		;
	}

	printf("请再次输入密码：\n");
	int ret = getchar();
	if('Y' == ret)
		printf("密码正确\n");
	else
		printf("密码错误\n");

	return 0;
}



