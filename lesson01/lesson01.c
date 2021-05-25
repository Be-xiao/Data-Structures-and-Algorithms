#include <stdio.h>
#include <malloc.h>
/*
1、什么是数据结构？
数据结构(Data Structure)是计算机存储、组织数据的方式，指相互之间存在一种或多种关系的数据元素的集合。

2、什么是算法？
算法(Algorithm):就是定义良好的计算过程，他取一个或一组值为输入，并产生出一个或一组值作为输出。简单来
说算法就是一系列的计算步骤，用来将输入数据转化成输出结果。
*/

//!时间复杂度&空间复杂度
/*
算法效率
算法效率分析分为两种:第一种是时间效率，第二种是空间效率。时间效率被称为时间复杂度，而空间效率被称作空间
复杂度。时间复杂度主要衡量的是一个算法的运行速度，而空间复杂度主要衡量一个算法所需要的额外空间，在计算机
发展的早起，计算机的储存容量很小。所以对空间复杂度很是在乎。但是经过计算机行业的迅速发展，计算机的储存容
量已经达到了很高的程度。所以我们如今已经不需要特别关注一个算法的空间复杂度。
*/

/*
时间复杂度
时间复杂度的定义:在计算机科学中，算法的时间复杂度是一个函数，它定量描述了该算法的运行时间。一个算法执行所
耗费的时间，从理论上说，是不能计算出的，只能把你的程序放在机器上跑起来才能知道。但是我们需要每个算法都上机
器测试吗？虽然可以都上机测试，但是这样会很麻烦，所以需要有时间复杂度这个分析方式。一个算法所花费的时间与其
中语句的执行次数成正比例，算法中的基本操作的执行次数，为时间复杂的时间复杂度。
*/

//?大O的渐进表示法

//请计算一下Func1基本操作执行次数

void Func1(int N)
{
    int count = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            count++;
        }
    }

    for (int k = 0; k < 2 * N; k++)
    {
        count++;
    }

    int M = 0;
    while (M--)
    {
        count++;
    }
    printf("%d\n", count);
}

/*
Func1执行的基本操作次数：
F(N)=n^2+2*n+10
F(N)=N²+2N+10
*/

/*
实际中我们计算时间复杂度时，我们其实并不一定要计算精确的执行次数，而只需要大概执行次数，那么这里我们使用
大O的渐进表示法。

推导大O阶方法:
1、用常数1取代运行时间中的所有加法常数
2、在修改后的运行次数函数中，只保留最高阶项
3、如果最高阶项存在且不是1，则去除这个项目相乘的常数。得到的结果就是大O阶。
*/

//使用大O渐进表示法表示，Func1的时间复杂度为：O(N²)

/*
时间复杂度存在最好、平均和最坏情况：
最坏情况：任意输入规模的最大运行次数(上界)
平均情况：任意输入规模的期望运行次数
最好情况：任意输入规模的最小运行次数(下界)
*/

/*
例如：
最好情况：1次找到
最坏情况：N次找到
平均情况：N/2次找到
*/

//?在实际中一般情况关注的是算法的最坏运行情况，所以数组中搜索数据时间复杂度为O(N)

//*计算strchr的时间复杂度
//const char *strchr(const char *str, int character)

//? 计算BubbleSort的时间复杂度

void BubbleSort(int *a, int n)
{
    assert(a);
    for (int end = n; end > 0; end--)
    {
        int exchange = 0;
        for (int i = 1; i < end; i++)
        {
            if (a[i - 1] > a[i])
            {
                Swap(&a[i - 1], &a[i]);
                exchange = 1;
            }
        }

        if (exchange == 0)
            break;
    }
}

/*
F(N) = 1 + 2 + 3 + ...... + n-1的等差数列
时间复杂度O(N²)
最好情况：O(N)
*/

// 计算BinarySearch的时间复杂度
int BinarySearch(int *a, int n, int x)
{
    assert(a);

    int begin = 0;   // 初始化开始索引
    int end = n - 1; // 初始化结束索引
    while (begin < end)
    {
        int mid = begin + ((end - begin) >> 1); //主要防止溢出，就是除以2的意思
        // 如果查询的数等于中间索引对应的数组里的数，则返回mid索引，并退出循环

        if (a[mid] < x)
            begin = mid + 1;
        else if (a[mid] > x) // 判断并计算结束索引
            end = mid;
        else // 判断并计算开始索引
            return mid;
    }

    return -1;
}
//*时间复杂度O(log2(N))

// 计算阶乘地柜Factorial的时间复杂度
long long Factorial(size_t N)
{
    return N < 2 ? N : Factorial(N - 1) * N;
}
//*时间复杂度O(N)
//递归算法如何计算：递归次数*每次递归函数的次数

// 计算斐波那契递归Fibonacci的时间复杂度
long long Fibonacci_r(size_t N)
{
    return N < 2 ? N : Fibonacci_r(N - 1) + Fibonacci_r(N - 2);
}

// 求出整个斐波那契数列
long long *Fibonacci(size_t N)
{
    long long *fibArray = malloc(sizeof(long long) * N);
    fibArray[0] = 0;
    if (N == 0)
        return fibArray;

    fibArray[1] = 1;
    //以空间换时间
    for (int i = 2; i <= N; i++)
    {
        fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
    }

    return fibArray;
}

/*
时间复杂度不计算时间，计算大概的运行次数
空间复杂度不计算空间，计算大概定义的变量个数
*/

/*
空间复杂度是对一个算法在运行过程中临时占用储存空间大小的量度。空间复杂度不是程序占用了多少bytes的空
间，因为这个也没有太大意义，所以空间复杂度计算的是变量的个数。空间复杂度计算规则基本跟时间复杂度类似，
也使用大O渐进表示法。
*/