// 2022考研计算机王道数据结构
// 第二章线性表02 顺序表的定义 - 静态分配
// void InitList(SeqList &L)
// youtube: https://www.youtube.com/watch?v=9PJWoU06GsE&list=PLjAs5kw1NNs1_IKGo3t5Ceao4MtFuDTcq&index=8
// referto: https://github.com/kangjianwei/Data-Structure/blob/master/Dev-C%2B%2B/CourseBook/0201_SqList/SqList.cpp




#include <stdio.h>
#define MaxSize 10

typedef int ElemType;

typedef struct
{
    ElemType data[MaxSize];
    int length;
} SqList;

void InitList(SqList &L)
{
    for (int i = 0; i < MaxSize; i++)
        L.data[i] = 0;
    L.length = 0;
}

void PrintList(SqList &L)
{
    if (L.length == 0)
        return;
    for (int i = 0; i < L.length - 1; i++)
        printf("%d, ", L.data[i]);
    printf("%d\n", L.data[L.length - 1]);
}

int main()
{
    printf("sizeof L: %li\n", sizeof(SqList));
    SqList L;
    L.length = 5;
    PrintList(L); // data is dirty before initilization
    InitList(L);
    L.length = 5;
    for (int i = 0; i < L.length; i++)
        L.data[i] = 100 + i;
    PrintList(L);
}
