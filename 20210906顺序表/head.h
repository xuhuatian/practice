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
	int size;//Ԫ�ظ���
	int capacity;//����
}S;

void SInit(struct S* s1);//��ʼ��˳���

//ͷ��
void SPushBack(S* s1, int x);
//��ӡ˳���
void SPrint(S* s1);
//β��
void SPushfront(S* s1, int x);
//ͷɾ
void SPopBack(S* s1);
//βɾ
void SPopFront(S* s1);
//�������
void shuijicaru(S* s1,int x,int n);
//���ɾ��
void Sdel(S* s1, int x);
//����
void finish(S* s1);
#endif