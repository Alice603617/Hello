#define _CRT_SECURE_NO_WARNINGS

//1.����ֵ����
//2.const���εĳ�����

#include <stdio.h>
//int main()
//{
//	//30; //��������ֵ����
//	//3.14; //����������ֵ����
//	//'w'; //�ַ�������ֵ����
//	//"hello bit"; //�ַ���������ֵ����
//	//const int a = 10; //10����������ֵ����,a�ǳ�����,const����a,�����Ǳ����������޸ģ��г���������
//	//a = 20; //20����������ֵ����,a�ǳ�����,�����޸�
//	//printf("%d\n", a);//��Ҫͷ�ļ�
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

//ö�ٳ���
//enum Color
//{
//	RED, //0
//	GREEN, //1
//	BLUE
//}; //ö�����͵Ķ��壬����Ҫ�ռ�
//
////�Ա�
//enum Sex
//{
//	//ö�ٳ���
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//
//int main()
//{
//	//��ԭɫ
//	//Red Green Blue
//	int num = 10;
//	enum Color c = RED;//����cʱ���ڴ�����ռ�
//	//RED = 20;//ö�ٳ��������޸� ERROR
//	//MALE = 1;//ö�ٳ��������޸� ERROR
//	return 0;
//}

#include <string.h>

//int main()
//{
//	//char �ַ�����
//	// ��a��;
//	// char ch = 'a'; 
//	//�ַ���
//	//c������û���ַ�������
//	//"abcdef";
//	char arr1[] = "abcdef";//7,\0
//	char arr2[] = { 'a','b','c','d','e','f','\0'};//6
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//strlen���ַ������ȣ�����\0����
//
//
//	//int len = strlen("abc");//���ַ������ȵ�һ��������string length  �⺯��ʹ����Ҫͷ�ļ�#include <string.h>
//	//printf("%d\n", len);
//	
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);//%s ����\0����
//	return 0;
//} 



//int main()
//{
//
//	//printf("abc\n");//\n����(ת���ַ�)
//	printf("abc\0def");//\0�ַ���������־
//
//	return 0;
//}

//ת���ַ�
//����ĸ��
//??) --> ]
//??( --> [

//%d��ӡ����
//%c��ӡ�ַ���
//%s��ӡ�ַ���
//%f��ӡ������float
//%lf��ӡ˫���ȸ�����double
//%zu��ӡsizeof����

//int main()
//{
	//\n ����
	//\t ˮƽ�Ʊ��
	//\\ ����\����ֹ����������ת���ַ�
	//\" ����һ���ַ����ڲ���˫����
	//\' �����ַ�������
	//\r �س�
	//\b �˸�
	//\f ��ҳ
	//\v ��ֱ�Ʊ��
	//\a ����
	//\? ����?,����д�������ʺ�ʱʹ�ã���ֹ���Ǳ�����������ĸ��
	//\ddd��ʾ1-3���˽���������\130X
	//xdd��ʾ1-2��ʮ������������\xA9
	/*printf("hello \n bit\n");
	printf("hello \t bit\n");
	printf("hello \\ bit\n");
	printf("hello \" bit\n");
	printf("hello \' bit\n");*/
	//printf("%s\n","(are you ok\?\?)");
	//printf("c:\\test\\test.c");//��ӡ·����˫б��
	//printf("%c\n", '\130');//\ddd �˽�����

	//printf("%d\n", strlen("qwer t"));//��ӡ��6���ַ�
	//printf("%d\n", strlen("c:\test\628\test.c"));//��ӡ��14���ַ�
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
//	printf("�������\n");
//
//	while (line < 20)
//	{
//		printf("д����:%d\n",line);
//		line++;
//	}
//	if(line >= 20)
//	{
//		printf("��ҵ\n");
//	}
//	else
//	{
//		printf("����Ŭ��\n");
//	}
//	return 0;
//}

//������2��������
//����
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
//	//����
//	scanf("%d %d", &n1, &n2);
//	//���
//	//int sum = n1 + n2;
//	//�������
//	int sum = ADD(n1, n2);
//	int t1 = 100;
//	int t2 = 200;
//	int ret = ADD(t1, t2);//��������
//	//��ӡ
//	printf("%d\n",sum);
//
//	return 0;
//}

//����
//int main()
//{
//
//	int arr[10] = { 10,11,12,13,14,15,16,17,18,19 };//����һ�����Դ��10������������
//	//ptintf("%d\n", arr[6]);//ͨ���±��������Ԫ��
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i = i + 1;
//	}
//	return 0;
//}

//��ҵ1
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

//��ҵ2
//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Lily    18     Female\n");
//	return 0;
//}

//��ҵ3
//int main()
//{
//	printf("i lost my cellphone!\n");
//	return 0;
//}
//��ҵ4
//int main()
//{
//	int a = 40;
//	int c = 212;
//	int r = (-8 + 22) * a - 10 + c / 2;
//	printf("%d\n", r);
//
//	return 0;
//}

//��ҵ5
//int main()
//{
//	//��֧�ֳ�ʼ��
//	//int arr[n] = { 1 };
//
//	return 0;
//}
//��ҵ6
//����Max
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
//	//�����������Ľϴ�ֵ
//	int r = Max(a, b);
//
//	printf("%d\n", r);
//
//	return 0;
//}


//��ҵ7����y��ֵ
//int main()
//{
//	//����
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//	//���
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


//������
//int main()
//{
//	//int a = 7 / 2;
//	//int b = 7 % 2;//ȡģ��ȡ��
//	//printf("%d\n", a);//3
//	//printf("%d\n", b);//1
//	// / ���ŵ����˶�����������������������������һ����������ִ�и���������
//	float c = 7 / 2.0;
//	printf("%.2f\n", c);//3.5
//	int d = 7 % -2;//ȡģ���������˱���������
//
//	return 0;
//}

//��ֵ
//int main()
//{
//	int a = 0;//��ʼ��
//	a = 20;//��ֵ
//
//	/*a = a + 3; == a += 3;*/
//
//	return 0;
//}

//C�����У�0�����
//! ��ת���
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

//sizeof�ǵ�Ŀ������

//int main()
//{
	//int a = 10;
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof a);
	////printf("%d\n", sizeof int);����

	//int arr[10] = { 0 };
	//printf("%d\n", sizeof(arr));//40 ��������������Ĵ�С����λ���ֽ�
	//printf("%d\n", sizeof(arr[0]));//4
	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));//10 - �����Ԫ�ظ���



	//int a = 10;
	////int b = a++;//��ʹ�ú�++
	////int b = a;a=a+1;
	////int b = ++a;//��++����ʹ��
	////a=a+1;b=a
	////int b = a--;
	//int b = --a;
	////a = a-1;b=a
	//printf("%d\n", b);//10 11
	//printf("%d\n", a);//11 11
	 
	//ǿ������ת��
	/*int a = (int)3.14;
	printf("%d\n", a);*/

	/*return 0;
}*/


//int main()
//{
//	int a = 10;
//	if (a == 0)//=��ֵ������,==��ϵ������
//	{
//		printf("hehe\n");
//	}
//	return 0;
//
//}


//int main()
//{
	//&& �߼��� - ����
	//|| �߼��� - ����
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
//	int r = (a > b) ? a : b;//��Ŀ�����
//
//
//	return 0;
//}


//���ű��ʽ�����Ÿ�����һ�����ʽ
//���ű��ʽ���������μ���ÿ�����ʽ���������ʽ�Ľ�������һ�����ʽ�Ľ��

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	int d = (c = a - 2, a = b + c, c - 3);//���ű��ʽ
//	printf("%d\n",d);//5
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5 };
//	int n = 3;
//	arr[n] = 100;//[]�����±����ò����� arr��3�����±����ò�����������������
//	return 0;
//}


//�������ò�����
//int Add(int x, int y)
//{
//	return (x + y);
//}
//
//int main()
//{
//	int sum = Add(2, 3);//Add(a,b)�������ò�����,Add,2,3����()�Ĳ�����
//	return 0;
//}

