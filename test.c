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

//int main()
//{
//	//int ch = 0;
//	//while(getchar())
//	//int ch = getchar();//getchar�Ӽ��̻�ȡһ���ַ�
//	//printf("%c\n", ch);//1
//	//putchar(ch);//2
//
//	//int ch = 0;
//	//while
//
//	//eg:
//	char password[20] = { 0 };
//	printf("���������룺");
//	scanf("%s", password);//scanf��getchar����ʱҪע�⻺����
//	//
//	//getchar();//���ջس�\n������ᱻ�����getchar����(�������ȫ)
//	int ch = 0;
//	while ((ch = getchar()))//ѭ������ַ���ֱ�������س�Ϊֹ
//	{
//		;
//	}
//	printf("���ٴ��������룺\n");
//	int ret = getchar();
//	if('Y' == ret)
//		printf("������ȷ\n");
//	else
//		printf("�������\n");
//
//	return 0;
//}

//��ҵ1��//'a'-asclli��ֵ97
//int main()
//{
//	int arr[] = {73,32,99,97,110,32,100,111,32,105,116,33};
//	int i = 0;
//	//sizeof(arr):������������ֽ�����sizeof(arr[0]):����������Ԫ�صĴ�С
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (i < sz)
//	{
//		printf("%c", arr[1]);
//		i++;
//	}
//
//	return 0;
//}


//��ҵ2��
//int main()
//{
//	//��������
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%4d%2d%2d", &year, &month, &day);
//	//���
//	printf("yser=%d\n", year);
//	printf("month=%02d\n", month);//��ȫ��λeg:01
//	printf("day=%02d\n", day);
//	return 0;
//}

//��ҵ3��
//int main()
//{
//	//��������
//	int id = 0;
//	float c = 0.0f;
//	float e = 0.0f;
//	float m = 0.0f;
//
//	//����ѧ���Լ�3�Ƴɼ���ѧ�źͳɼ�֮����Ӣ�ķֺŸ������ɼ�֮����Ӣ�Ķ��Ÿ�����
//	scanf("%d;%f,%f,%f", &id, &c, &e, &m);
//	//���ѧ�ţ�3�Ƴɼ�
//	printf("The each subject score of NO. %d is %.2f, %.2f, %.2f.\n",id, c, e, m);//.2fС���㱣����λ
//
//	return 0;
//}

//��ҵ4:
//int main()
//{
//	int n = printf("Hello world!");//����������\n��Ϊ\n����һ���ַ�����������\n��
//	printf("\n%d\n", n);
//	return 0;
//}

//��ҵ5��\ת���ַ�
//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout << \"Hello world!\"<< endl;\n");
//	return 0;
//}


//��ҵ6���ҵ������
//����һ��
//int main()
//{
//	//����
//	int arr[4] = { 0 };
//	int i = 0;
//	//����һ��4���������ÿո�ֿ���
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	//�����ֵ
//	//�����һ���������ֵ
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
//	//���һ�У�һ��������Ϊ�����4���������������
//	printf("%d\n", max);
//	return 0;
//}
//��������
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int max = 0;
//	scanf("%d", &max);//�����һ���������ֵ
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

//��ҵ7������������
//int main()
//{
//	//�������
//	double r = 0.0f;
//	double  v = 0.0f;
//	//������İ뾶
//	scanf("%lf", &r);
//	//����
//	v = 4/3.0 * 3.1415926 * r * r * r;
//
//	printf("V=%.3lf\n", v);
//	return 0;
//}

//forѭ��(���ʽ1;���ʽ2;���ʽ3)
//ѭ����䣻
//��ӡ1-10
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if(i == 5)
//			//break;//����ѭ��
//			continue;//��������ѭ����������һ��ѭ��
//
//		printf("%d ", i);//ѭ����
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for(j = 0; j < 3; j++)//ʡ��j=0,ֻ���3��*
//			printf("*\n ");
//	}
//
//	//int i = 0;
//	//for (int i = 0; i < 10; i++)//C99��׼��������forѭ���ж������
//	//{
//	//	printf("%d ", i);
//	//}
//	return 0;
//}


//do_whileѭ��:

//int main()
//{
//	int i = 1;
//	do
//	{
//		//i++;
//		if(i == 5)
//			//break;//����ѭ��
//			continue;//��������ѭ����������һ��ѭ��
//
//		printf("%d ", i);//i=5ʱ�����˶δ���
//		i++;
//	} 
//	while (i <= 10);
//	
//
//	return 0;
//}



//��ϰ��
//1����n�Ľ׳�
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


//����1��+2��+3��+...+10��
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int ret = 1;
//
//	//for(i = 1; i <= 10; i++)
//	//{
//	//	ret = 1;//ÿ�μ���׳�ǰ��Ҫ��ret��ʼ��Ϊ1
//	//	for (j = 1; j <= i; j++)
//	//	{
//	//		ret = ret * j;
//	//	}
//	//	sum = sum + ret;
//	//}
//
//
//	//�Ż���
//	for (i = 1; i <= 3; i++)
//	{
//		ret = ret * i;//����׳�
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}



//��ϰ2����һ�����������в���ĳ����,�۰����
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//
//
//	return 0;
//}



//�۰���ң����ֲ��ң�
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 4;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)//�����еȺ�
//	{
//		int mid = left + (right - left) / 2; //��ֹ(left+right)���
//		int mid = (left + right) / 2;//������ѭ���ڲ�
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
//				printf("�ҵ���,�±��ǣ�%d\n", mid);
//				break;
//			}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}



//��ϰ3����д���룬��ʾ����ַ��������ƶ������м���
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
//		Sleep(1000);//����1��
//		system("cls");//����,system��һ���⺯�������Ե��ò���ϵͳ����
//		left++;
//		right--;
//		
//	}
//	
//	printf("%s\n", arr2);
//
//	return 0;
//}


//��ϰ4��
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", password);//�������������ǵ�ַ������Ҫȡ��ַ
//		if (strcmp(password, "123456") == 0)//�Ƚ������ַ����Ƿ���Ȳ���ʹ��==������Ӧ��ʹ�ÿ⺯����strcmp,�������ֵ��0����ʾ�����ַ������
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//		if (i == 3);
//		{
//			printf("��¼ʧ��\n");
//		}
//
//	}
//	
//
//	return 0;
//}

//��������Ϸ��(1-100)
//�����֣���ʾ���˻���С�ˣ�ֱ������Ϊֹ
//ʱ�����

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
//	//srand((unsigned int)time(NULL));//�������������
//	//RAND_MAX;//32767
//	//1.���������
//	int ret = rand() % 100 + 1;//����һ�������,��Χ��1-100
//	//printf("������ǣ�%d\n", ret);
//	//2.������
//	while(1)
//	{
//		printf("������֣�");
//		scanf("%d", &guess);
//		if(guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if(guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//
//
//}
//
////ָ��
////int *p = NULL;
////int a = 0;
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//�������������
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				game();//�����ֵ������߼�
//				printf("��Ϸ��ʼ\n");
//				break;
//			case 0:
//				printf("��Ϸ����\n");
//				break;
//			default:
//				printf("ѡ�����������ѡ��\n");
//				break;
//		}
//	} while (input);
//
//
//	return 0;
//}





















