#include "SeqList.h"

void SeqListInit(SeqList s)
{
    s.array = (SLDataType *)malloc(sizeof(SLDataType) * 4);

    if (s.array == NULL)
    {
        printf("申请内存失败\n");
        exit(-1);
    }

    s.size = 0;
    s.capacity = 4;
}

//尾插尾删
void SeqListPushBack(SeqList *ps, SLDataType x);
void SeqListPopBack(SeqList *ps);
//头插头删
void SeqListPushFront(SeqList *ps, SLDataType x);
void SeqListPopFront(SeqList *ps);
//任意位置的插入删除
void SeqListInsert(SeqList *ps, int pos, SLDataType x);
void SeqListErase(SeqList *ps, int pos);