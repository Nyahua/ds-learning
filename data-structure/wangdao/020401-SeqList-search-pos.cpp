// 2022考研计算机王道数据结构
// 第二章线性表04 顺序表的查找 - 按位查找
// bool GetElem(SqList L, int i, ElemType &e)
// youtube: https://youtu.be/EVVIMvbbvQA?list=PLjAs5kw1NNs1_IKGo3t5Ceao4MtFuDTcq
// referto: https://github.com/kangjianwei/Data-Structure/blob/master/Dev-C%2B%2B/CourseBook/0201_SqList/SqList.cpp


#include <stdio.h>
#define MaxSize 10

typedef int ElemType;
typedef struct
{
    ElemType data[MaxSize];
    int length;
} SqList;

// print the elements one by one
void PrintList(SqList &L)
{
    if (L.length == 0)
        return;
    for (int i = 0; i < L.length - 1; i++)
        printf("%d, ", L.data[i]);
    printf("%d\n", L.data[L.length - 1]);
}

// initialize the list with 0
void InitList(SqList &L)
{
    for (int i = 0; i < MaxSize; i++)
        L.data[i] = 0;
    L.length = 0;
}

// Insert into list
// in location i with value e
bool ListInsert(SqList &L, int i, ElemType e)
{
    if (i < 1 || i > L.length + 1 || L.length == MaxSize)
        return false;
    for (int j = L.length; j >= i; j--)
        L.data[j] = L.data[j - 1];
    L.data[i - 1] = e;
    L.length++;
    return true;
}

// Delete a element in list
// in location i, return the delelatd value e
bool ListDelete(SqList &L, int i, ElemType &e)
{
    if (i < 1 || i > L.length)
        return false;
    e = L.data[i - 1];
    for (int j = i; j < L.length; j++)
        L.data[j - 1] = L.data[j];
    L.data[L.length - 1] = 0;
    L.length--;
    return true;
}

// get element value e in position i
bool GetElem(SqList L, int i, ElemType &e)
{
    if (i < 1 || i > L.length)
        return false;
    else
        e = L.data[i - 1];
    return true;
}

int main()
{
    // initialize then fill data from 101 ~ 105
    SqList L;
    InitList(L);
    L.length = 5;
    for (int i = 0; i < L.length; i++)
        L.data[i] = 101 + i;
    PrintList(L);

    for (int i = 1; i <= L.length + 1; i++)
    {
        int e;
        if (GetElem(L, i, e))
            printf("List in postion %d is: %d\n", i, e);
        else
            printf("wrong positon %d!\n", i);
    }
}
