#define BeginMaxLength 20
#define ElementType int
#include<stdlib.h>
#include<stdio.h>
typedef struct vector{
    ElementType* head;
    unsigned length;    //当前vector中所含的元素的长度
    unsigned maxLength;      //vector最大长度
}vector;

//增删改查

//查看当前vector的长度
unsigned size(vector* v);

//查询第i个位置的元素
ElementType search(vector* v,int i);

//更改第i个位置的元素

//删除第i个位置的元素

//在vector最末尾加上一个元素

//在vector第i个位置上加上元素