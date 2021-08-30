#include<stdio.h>
#include<assert.h>

int test1(int* arr, int k)
{
	assert(arr);//判断是否为NULL。

	int sum1 = 0;//arr的和
	int sum2 = 0;//0到n的和

	int a = k;
	int i = 0;

	for (i = 0; i < k; i++)//arr的和
	{
		sum1 += arr[i];
	}

	for (i = 0; i < k + 1; i++)//0到n的和
	{
		sum2 += i;
	}

	return (sum2 - sum1);
}

int main()
{
	int arr[] = { 9, 6, 4, 2, 3, 5, 7, 0, 1 };
	
	int ret = test1(arr, sizeof(arr)/sizeof(arr[0]));

	printf("缺失的数：%d\n", ret);
	return 0;
}