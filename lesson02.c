#include <stdio.h>
#include <malloc.h>
#pragma once

//*线性表
/*
线性表(linear list)是n个具有相同特性的数据元素的有限序列。线性表是一种在实际中广泛使用的数据结
构，常见的线性表：顺序表、链表、栈、队列、字符串...

线性表在逻辑上是线性结构，也就说是连续的一条直线。但是在物理结构上并不一定是连续的，线性表在物理
理上储存时，通常以数组和链式结构的形式存储。
*/

/*------------------------------------------------------------------------------
数据结构的两种结构：
    物理结构(内存中如何存)
    逻辑结构(是我们想象出来的)

线性表：
    物理结构：
        数组：可能会浪费内存
        链表：按需申请内存
------------------------------------------------------------------------------*/

//*顺序表
/*
概念及结构：
顺序表是用一段物理地址连续的储存单元一次存储数据元素的线性结构，一般情况下采用数组存储。在数组
上完成书记的曾删查改。

顺序表一般可以分为：
    静态顺序表:使用定长数组存储
    动态顺序表：使用动态开辟的数组存储
*/

//!顺序表的静态存储(固定大小)
/*
#define N 100
typedef int SLDataType;

typedef struct SeqList
{
    SLDataType array[N]; //定长数组
    size_t size;         //有效数据的个数
} SeqList;
//接口
void SeqListPushBack(SeqList *ps, SLDataType x);
void SeqListPopBack(SeqList *ps);
void SeqListPushFront(SeqList *ps, SLDataType x);
void SeqListPopFront(SeqList *ps);
*/

//!动态顺序表设计(大小可变)
typedef int SLDataType;

//vector
typedef struct SeqList
{
    SLDataType *array; //指向动态开辟的数组
    int size;          //有效数据的个数
    int capacity;      //容量的大小
} SeqList;
void SeqListPushBack(SeqList *ps, SLDataType x);
void SeqListPopBack(SeqList *ps);
void SeqListPushFront(SeqList *ps, SLDataType x);
void SeqListPopFront(SeqList *ps);