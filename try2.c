// ͷ�ļ��������׼��
#include <stdio.h>    // ���� printf
#include <stdlib.h>   // ���� malloc �� free

// �����ʼ�������
#define INIT_SIZE 5
#define INCREMENT 3   // ����ʱ���ӵĴ�С

// ����˳����д�ŵ�������
typedef int ElemType;

// ˳���ṹ��
typedef struct {
    ElemType* data;   // ָ��̬�����ָ��
    int length;       // ��ǰ���ȣ����ж��ٸ�Ԫ�أ�
    int max_size;     // ��ǰ�������
} SeqList;

// ============ �������� ============
int InitList(SeqList* L);                     // ��ʼ��˳���
int ListInsert(SeqList* L, int i, ElemType e); // �ڵ� i ��λ�ò��� e
int ListDelete(SeqList* L, int i, ElemType* e); // ɾ���� i ��Ԫ�أ��� e ������ֵ
void PrintList(SeqList* L);                   // ��ӡ˳���
int IncreaseSize(SeqList* L, int increment);  // ���ݺ���

// ============ ������ ============
int main() {
    SeqList L;  // ����һ��˳������

    // 1. ��ʼ��˳���
    if (InitList(&L)) {
        printf("˳����ʼ���ɹ���\n");
    }
    else {
        printf("��ʼ��ʧ�ܣ�\n");
        return -1;
    }

    // 2. ��ʾ�������
    printf("\n��ʼ����Ԫ�أ�\n");
    ListInsert(&L, 1, 10);  // ��λ�� 1 ���� 10
    ListInsert(&L, 2, 20);  // ��λ�� 2 ���� 20
    ListInsert(&L, 3, 30);  // ��λ�� 3 ���� 30
    PrintList(&L);          // �����10 20 30

    ListInsert(&L, 2, 15);  // ��λ�� 2 ���� 15 �� ��� 10 15 20 30
    printf("��λ�� 2 ���� 15 ��\n");
    PrintList(&L);

    // 3. ��ʾɾ������
    printf("\n��ʼɾ��Ԫ�أ�\n");
    ElemType deleted;  // �������ձ�ɾ����Ԫ��

    if (ListDelete(&L, 1, &deleted)) {
        printf("�ɹ�ɾ���� 1 ��Ԫ�أ�����ֵ��: %d\n", deleted);
    }
    else {
        printf("ɾ��ʧ�ܣ�λ����Ч��\n");
    }
    printf("ɾ����\n");
    PrintList(&L);  // Ӧ���� 15 20 30

    // 4. ����ɾ�������ڵ�λ��
    printf("\n����ɾ���� 10 ��Ԫ�أ�\n");
    if (ListDelete(&L, 10, &deleted)) {
        printf("ɾ���ɹ���ֵΪ %d\n", deleted);
    }
    else {
        printf("ɾ��ʧ�ܣ�λ�� 10 ������Χ��\n");
    }

    // 5. ����ͷ��ڴ�
    free(L.data);
    L.data = NULL;
    printf("\n����������ڴ����ͷš�\n");

    return 0;
}

// ============ �������� ============

// ��ʼ��˳���
int InitList(SeqList* L) {
    L->data = (ElemType*)malloc(sizeof(ElemType) * INIT_SIZE);
    if (L->data == NULL) {
        return 0; // ����ʧ��
    }
    L->length = 0;         // ��ʼΪ�ձ�
    L->max_size = INIT_SIZE;
    return 1; // �ɹ�
}

// �ڵ� i ��λ�ò���Ԫ�� e
// i �� 1 ��ʼ���� 1 ��Ԫ�أ�
int ListInsert(SeqList* L, int i, ElemType e) {
    // ��� i �Ƿ�Ϸ���1 <= i <= length+1
    if (i < 1 || i > L->length + 1) {
        printf("����λ�� %d ��Ч��\n", i);
        return 0;
    }

    // ����Ƿ����������˾�����
    if (L->length >= L->max_size) {
        if (!IncreaseSize(L, INCREMENT)) {
            printf("����ʧ�ܣ��޷����룡\n");
            return 0;
        }
    }

    // �Ӻ���ǰ���ѵ� i �����Ժ��Ԫ�غ���
    for (int j = L->length; j >= i; j--) {
        L->data[j] = L->data[j - 1];
    }

    L->data[i - 1] = e;  // ������Ԫ�أ������±�� 0 ��ʼ��
    L->length++;         // ���� +1

    printf("��λ�� %d ���� %d �ɹ���\n", i, e);
    return 1;
}

// ɾ���� i ��Ԫ�أ��� e ������ֵ
int ListDelete(SeqList* L, int i, ElemType* e) {
    // ��� i �Ƿ�Ϸ���1 <= i <= length
    if (i < 1 || i > L->length) {
        return 0;
    }

    *e = L->data[i - 1];  // �ȱ��汻ɾ����ֵ

    // ��ǰ���󣬰Ѻ����Ԫ��ǰ��
    for (int j = i; j < L->length; j++) {
        L->data[j - 1] = L->data[j];
    }

    L->length--;  // ���� -1
    return 1;
}

// ���ݺ��������� increment ���ռ�
int IncreaseSize(SeqList* L, int increment) {
    ElemType* old = L->data;
    L->data = (ElemType*)realloc(L->data, (L->max_size + increment) * sizeof(ElemType));
    if (L->data == NULL) {
        return 0; // ����ʧ��
    }
    L->max_size += increment;
    printf("�����ݣ�������Ϊ %d\n", L->max_size);
    return 1;
}

// ��ӡ˳�������Ԫ��
void PrintList(SeqList* L) {
    printf("��ǰ˳���%d/%d����", L->length, L->max_size);
    for (int i = 0; i < L->length; i++) {
        printf("%d ", L->data[i]);
    }
    printf("\n");
}