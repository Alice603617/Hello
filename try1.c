//// ͷ�ļ�������������Ҫ�Ŀ�
//#include <stdio.h>    // ���� printf
//#include <stdlib.h>   // ���� malloc �� free
//
//// ����˳��������ʼ����
//#define INIT_SIZE 6
//
//// ������д�ŵ�������������Ըĳ� float �ȣ�
//typedef int ElemType;
//
//// ����˳���Ľṹ
//struct SeqList {
//    ElemType* data;   // data ��һ��ָ�룬����ָ��̬����
//    int length;       // ��ǰ�����ж��ٸ�Ԫ��
//    int max_size;     // ����ܴ���ٸ�Ԫ��
//};
//
//// ע�⣺����ֻ�Ƕ����ˡ��ṹģ�塱����û�д��������ı�
//
//int main() {
//    // 1. ����һ��˳������ L
//    struct SeqList L;
//
//    // 2. ���ó�ʼ״̬����û��Ԫ��
//    L.length = 0;
//    L.max_size = INIT_SIZE;
//
//    // 3. ��̬�����ڴ棺���� INIT_SIZE �� ElemType ��С�Ŀռ�
//    L.data = (ElemType*)malloc(sizeof(ElemType) * INIT_SIZE);
//
//    // 4. ����ڴ��Ƿ�����ɹ�
//    if (L.data == NULL) {
//        printf("�ڴ����ʧ�ܣ������޷�������\n");
//        return -1;  // ���ش����룬�������
//    }
//
//    // 5. ����ɹ�����ӡ�ɹ���Ϣ
//    printf("˳������ɹ���\n");
//    printf("���Դ洢��� %d ��������\n", L.max_size);
//    printf("��ǰ�� %d ��Ԫ�ء�\n", L.length);
//    printf("���ݴ洢���ĵ�ַ��: %p\n", L.data);
//
//    // 6. ���������������������ˣ������ 3 ������
//    L.data[0] = 10;
//    L.data[1] = 20;
//    L.data[2] = 30;
//	L.data[3] = 40; // ע�⣺����û�м��Խ��
//    L.length = 4;  // ���³���
//
//    printf("�ѷ��� 4 ������");
//    for (int i = 0; i < L.length; i++) {
//        printf("%d ", L.data[i]);
//    }
//    printf("\n");
//
//    // 7. �������ǰ���ͷ��ڴ棨�ǳ���Ҫ����
//    free(L.data);
//    L.data = NULL;  // ����Ұָ��
//
//    printf("�ڴ����ͷţ����������\n");
//    return 0;
//}