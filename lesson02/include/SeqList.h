#pragma once
#include <stdio.h>
#include <stdlib.h>

//!动态顺序表设计(大小可变)
typedef int SLDataType;

//vector
typedef struct SeqList
{
    SLDataType *array; //指向动态开辟的数组
    int size;          //有效数据的个数
    int capacity;      //容量的大小
} SeqList;

//尾插尾删
void SeqListPushBack(SeqList *ps, SLDataType x);
void SeqListPopBack(SeqList *ps);
//头插头删
void SeqListPushFront(SeqList *ps, SLDataType x);
void SeqListPopFront(SeqList *ps);
//任意位置的插入删除
void SeqListInsert(SeqList *ps, int pos, SLDataType x);
void SeqListErase(SeqList *ps, int pos);