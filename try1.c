//// 头文件：引入我们需要的库
//#include <stdio.h>    // 用于 printf
//#include <stdlib.h>   // 用于 malloc 和 free
//
//// 定义顺序表的最大初始容量
//#define INIT_SIZE 6
//
//// 假设表中存放的是整数（你可以改成 float 等）
//typedef int ElemType;
//
//// 定义顺序表的结构
//struct SeqList {
//    ElemType* data;   // data 是一个指针，用来指向动态数组
//    int length;       // 当前表中有多少个元素
//    int max_size;     // 最大能存多少个元素
//};
//
//// 注意：上面只是定义了“结构模板”，还没有创建真正的表
//
//int main() {
//    // 1. 创建一个顺序表变量 L
//    struct SeqList L;
//
//    // 2. 设置初始状态：还没有元素
//    L.length = 0;
//    L.max_size = INIT_SIZE;
//
//    // 3. 动态申请内存：申请 INIT_SIZE 个 ElemType 大小的空间
//    L.data = (ElemType*)malloc(sizeof(ElemType) * INIT_SIZE);
//
//    // 4. 检查内存是否申请成功
//    if (L.data == NULL) {
//        printf("内存分配失败！程序无法继续。\n");
//        return -1;  // 返回错误码，程序结束
//    }
//
//    // 5. 如果成功，打印成功信息
//    printf("顺序表创建成功！\n");
//    printf("可以存储最多 %d 个整数。\n", L.max_size);
//    printf("当前有 %d 个元素。\n", L.length);
//    printf("数据存储区的地址是: %p\n", L.data);
//
//    // 6. 现在你可以往表里放数据了（比如放 3 个数）
//    L.data[0] = 10;
//    L.data[1] = 20;
//    L.data[2] = 30;
//	L.data[3] = 40; // 注意：这里没有检查越界
//    L.length = 4;  // 更新长度
//
//    printf("已放入 4 个数：");
//    for (int i = 0; i < L.length; i++) {
//        printf("%d ", L.data[i]);
//    }
//    printf("\n");
//
//    // 7. 程序结束前，释放内存（非常重要！）
//    free(L.data);
//    L.data = NULL;  // 避免野指针
//
//    printf("内存已释放，程序结束。\n");
//    return 0;
//}