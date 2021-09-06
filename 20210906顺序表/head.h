//#pragma once
#ifndef __ADD__H__
#define __ADD__H__
#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<assert.h>
#include<Windows.h>

#define N 100
#define MAX_N 


typedef struct S
{
	int* a;
	int size;//元素个数
	int capacity;//容量
}S;

void SInit(struct S* s1);//初始化顺序表

//头插
void SPushBack(S* s1, int x);
//打印顺序表
void SPrint(S* s1);
//尾插
void SPushfront(S* s1, int x);
//头删
void SPopBack(S* s1);
//尾删
void SPopFront(S* s1);
//随机插入
void shuijicaru(S* s1,int x,int n);
//随机删除
void Sdel(S* s1, int x);
//结束
void finish(S* s1);
#endif