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
//1.���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ���

#include <stdio.h>

//void test()
//{
	//static int a = 1;
	//1.static���ξֲ�����ʱ���ֲ��������������򣬲��ᱻ���٣����Ǳ����ھ�̬���������������������������ڼ䣬Ӱ���˱������������ڣ��������ڱ䳤�ˣ��ͳ������������һ����
	//�����ϣ�static���ξֲ�����ʱ���ı��˾ֲ������Ĵ洢λ�ã���ջ��Ϊ��̬��
	//ջ����žֲ����������������Ǻ��������ڼ䣨����������ϣ��ֲ������ͱ����٣�
	//��̬����ž�̬�����������������������������ڼ䣨�����������̬�����ű����٣�
	//������Ŷ�̬������ڴ棬���������ɳ���Ա����
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


//void test()//void -> ����Ҫ�κη���
//{
//	//ִ������
//	printf("hello world\n");
//}


//static����ȫ�ֱ���
//1.ȫ�ֱ����Ǿ����ⲿ�������Ե�
//����+����-->��ִ�г���
//static����ȫ�ֱ���ʱ��ȫ�ֱ������ⲿ�������Ա���ڲ��������ԣ�����Դ�ļ���.c���Ͳ�����ʹ�õ����ȫ�ֱ�����
//��ʹ��ȫ�ֱ���ʱ�о��������С�ˡ�


//�����ⲿ����
//extern int g_val;//extern�����ⲿ����
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}


//static���κ���
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
//	//�Ĵ�������
//	register int num = 3;//����:��num����ڼĴ�����
//
//	return 0;
//}


////define�����ʶ������
//#define  NUM 100
//
//
////define�����
////�����в����ģ���������滻��
////����Ԥ����׶ν����滻
//#define ADD(x,y) ((x)+(y))
//	//���� �����  ����
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

//ָ��
//int main()
//{
	//int a = 10;//���ڴ�����4���ֽڣ��洢10
	//&a;//ȡ��ַ���������ȡ����a�ĵ�ַ
	//printf("%p\n", &a);//0x61ff1c//%p:��16���Ƶ���ʽ�����ַ
	//int* p = &a;//ָ�����p�洢����a�ĵ�ַ,p��ָ�����,*˵��p��һ��ָ�룬int˵��pָ��Ķ�����int����
	//*p = 20;//�����ò���������˼����ͨ��p�д�ŵĵ�ַ�ҵ�p��ָ��Ķ���,*p��ʾp��ָ��Ķ���
	//printf("%d\n", a);

	/*char ch = 'w';
	char* pc = &ch;*/
	//ָ�����������ű��˵ĵ�ַ
	//ָ����������;�����ָ�������ָ��Ķ��������



	//return 0;
//}


//ָ�����ʹ�С

//int main()
//{
//	//������ʲô���Ͷ����ڴ���ָ�������ָ�����������Ŵ�С��һ��ָ�������Сȡ����һ����ַ���ʱ��Ҫ���ռ�
//	//32λ����ϵͳ�У�һ����ַռ4���ֽڣ�byte��������ָ������Ĵ�С����4���ֽ�
//	//64λ����ϵͳ�У�һ����ַռ8���ֽڣ�����ָ������Ĵ�С����8���ֽ�
//	printf("%d\n", sizeof(char*));//8
//	printf("%d\n", sizeof(short*));//8
//	printf("%zu\n", sizeof(int*));//8
//	return 0;
//}


//�ṹ��
//struct Stu//struct �ṹ���ǩ
//{
//	//��Ա
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	//->
//	//�ṹ��ָ�����->��Ա��
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);//�ṹ��ָ����ʳ�Ա����һ�ַ�ʽ
//}
//
//int main()
//{
//	struct Stu s = { "zhangsan",20,"nan","16628191719" };
//	
//	//�ṹ�����.��Ա��
//	//printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	printf(&s);
//	return 0;
//}





