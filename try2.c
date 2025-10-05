// 头文件：引入标准库
#include <stdio.h>    // 用于 printf
#include <stdlib.h>   // 用于 malloc 和 free

// 定义初始最大容量
#define INIT_SIZE 5
#define INCREMENT 3   // 扩容时增加的大小

// 假设顺序表中存放的是整数
typedef int ElemType;

// 顺序表结构体
typedef struct {
    ElemType* data;   // 指向动态数组的指针
    int length;       // 当前长度（已有多少个元素）
    int max_size;     // 当前最大容量
} SeqList;

// ============ 函数声明 ============
int InitList(SeqList* L);                     // 初始化顺序表
int ListInsert(SeqList* L, int i, ElemType e); // 在第 i 个位置插入 e
int ListDelete(SeqList* L, int i, ElemType* e); // 删除第 i 个元素，用 e 返回其值
void PrintList(SeqList* L);                   // 打印顺序表
int IncreaseSize(SeqList* L, int increment);  // 扩容函数

// ============ 主函数 ============
int main() {
    SeqList L;  // 定义一个顺序表变量

    // 1. 初始化顺序表
    if (InitList(&L)) {
        printf("顺序表初始化成功！\n");
    }
    else {
        printf("初始化失败！\n");
        return -1;
    }

    // 2. 演示插入操作
    printf("\n开始插入元素：\n");
    ListInsert(&L, 1, 10);  // 在位置 1 插入 10
    ListInsert(&L, 2, 20);  // 在位置 2 插入 20
    ListInsert(&L, 3, 30);  // 在位置 3 插入 30
    PrintList(&L);          // 输出：10 20 30

    ListInsert(&L, 2, 15);  // 在位置 2 插入 15 → 变成 10 15 20 30
    printf("在位置 2 插入 15 后：\n");
    PrintList(&L);

    // 3. 演示删除操作
    printf("\n开始删除元素：\n");
    ElemType deleted;  // 用来接收被删除的元素

    if (ListDelete(&L, 1, &deleted)) {
        printf("成功删除第 1 个元素，它的值是: %d\n", deleted);
    }
    else {
        printf("删除失败！位置无效。\n");
    }
    printf("删除后：\n");
    PrintList(&L);  // 应该是 15 20 30

    // 4. 尝试删除不存在的位置
    printf("\n尝试删除第 10 个元素：\n");
    if (ListDelete(&L, 10, &deleted)) {
        printf("删除成功，值为 %d\n", deleted);
    }
    else {
        printf("删除失败！位置 10 超出范围。\n");
    }

    // 5. 最后释放内存
    free(L.data);
    L.data = NULL;
    printf("\n程序结束，内存已释放。\n");

    return 0;
}

// ============ 函数定义 ============

// 初始化顺序表
int InitList(SeqList* L) {
    L->data = (ElemType*)malloc(sizeof(ElemType) * INIT_SIZE);
    if (L->data == NULL) {
        return 0; // 分配失败
    }
    L->length = 0;         // 初始为空表
    L->max_size = INIT_SIZE;
    return 1; // 成功
}

// 在第 i 个位置插入元素 e
// i 从 1 开始（第 1 个元素）
int ListInsert(SeqList* L, int i, ElemType e) {
    // 检查 i 是否合法：1 <= i <= length+1
    if (i < 1 || i > L->length + 1) {
        printf("插入位置 %d 无效！\n", i);
        return 0;
    }

    // 检查是否已满，满了就扩容
    if (L->length >= L->max_size) {
        if (!IncreaseSize(L, INCREMENT)) {
            printf("扩容失败，无法插入！\n");
            return 0;
        }
    }

    // 从后往前，把第 i 个及以后的元素后移
    for (int j = L->length; j >= i; j--) {
        L->data[j] = L->data[j - 1];
    }

    L->data[i - 1] = e;  // 插入新元素（数组下标从 0 开始）
    L->length++;         // 长度 +1

    printf("在位置 %d 插入 %d 成功！\n", i, e);
    return 1;
}

// 删除第 i 个元素，用 e 返回其值
int ListDelete(SeqList* L, int i, ElemType* e) {
    // 检查 i 是否合法：1 <= i <= length
    if (i < 1 || i > L->length) {
        return 0;
    }

    *e = L->data[i - 1];  // 先保存被删除的值

    // 从前往后，把后面的元素前移
    for (int j = i; j < L->length; j++) {
        L->data[j - 1] = L->data[j];
    }

    L->length--;  // 长度 -1
    return 1;
}

// 扩容函数：增加 increment 个空间
int IncreaseSize(SeqList* L, int increment) {
    ElemType* old = L->data;
    L->data = (ElemType*)realloc(L->data, (L->max_size + increment) * sizeof(ElemType));
    if (L->data == NULL) {
        return 0; // 扩容失败
    }
    L->max_size += increment;
    printf("已扩容，新容量为 %d\n", L->max_size);
    return 1;
}

// 打印顺序表所有元素
void PrintList(SeqList* L) {
    printf("当前顺序表（%d/%d）：", L->length, L->max_size);
    for (int i = 0; i < L->length; i++) {
        printf("%d ", L->data[i]);
    }
    printf("\n");
}