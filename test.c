#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


//int main() {

	/*int a = 10;
	if (a == 3){
		printf("haha\n");
	}*/

	//int age = 10;
	//if (age > 18) //ֻ��һ�����ʱ������ʡ�Դ�����
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
		printf("������\n");
	else if(age >= 18 && age<28)
		printf("����\n");
	else if (age >= 28 && age < 55)
		printf("����\n");
	else if(age >= 55 && age <= 100)
		printf("����\n");
	else
		printf("�������\n");*/



	//return 0;
//}



//int main() 
//{
//	int age = 10;
//	if (age < 18)
//		printf("δ����\n");
//	else
//	{
//		printf("������\n");
//		printf("��ӭ������ֲ�\n");
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

//��ϰ1���ж�һ��������������ż��

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//�ж�
//	if (num % 2 == 1)
//		printf("����\n");
//	else
//		printf("ż��\n");
//	return 0;
//}

//��ϰ2�����1��100֮�����е�����

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
//	switch (day)//ֻ�������ͱ��ʽ;case��ڣ����ܴ�͸;break����switch
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
//			printf("ѡ�����\n");
//			break;
//	
//	}
//
//	return 0;
//}


//��ϰ3��
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

//whileѭ��
//break�������õ���ֹѭ����continue��������ѭ������Ĵ��룬ֱ�ӽ�����һ��ѭ���ж�

//int main()
//{
//	//while(�������ʽ)
//	//{
//		//ѭ����
//	//}
//
//	int i = 1;//��ʼ�����ʽ
//
//	while(i <= 10)//�������ʽ
//	{
//		i++;
//		if( 5 == i)
//			//break;//����ѭ��
//			continue;//��������ѭ����������һ��ѭ��
//
//		printf("%d", i);//ѭ����
//		//i++;//�������ʽ
//	}
//	//��������2,3,4,6,7,8,9,10,11
//	return 0;	
//
//}

int main()
{
	//int ch = 0;
	//while(getchar())
	//int ch = getchar();//getchar�Ӽ��̻�ȡһ���ַ�
	//printf("%c\n", ch);//1
	//putchar(ch);//2

	//int ch = 0;
	//while

	//eg:
	char password[20] = { 0 };
	printf("���������룺\n");
	scanf("%s", password);//scanf��getchar����ʱҪע�⻺����
	//
	//getchar();//���ջس�\n������ᱻ�����getchar����(�������ȫ)
	int ch = 0;
	while ((ch = getchar()))//ѭ������ַ���ֱ�������س�Ϊֹ
	{
		;
	}

	printf("���ٴ��������룺\n");
	int ret = getchar();
	if('Y' == ret)
		printf("������ȷ\n");
	else
		printf("�������\n");

	return 0;
}



