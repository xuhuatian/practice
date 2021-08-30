#include<stdio.h>
#include<assert.h>

int test2(int* arr, int k)
{
	assert(arr);//判断是否为NULL。

	int ret = 0;//用来挨个异或的数，也是最后缺失的数

	int i = 0;
	for (i = 0; i < k; i++)//挨个异或数组
	{
		ret ^= arr[i];
	}

	for (i = 0; i < k + 1; i++)//挨个异或 1 到 n 
	{
		ret ^= i;
	}

	return ret;

}

int main()
{
	int arr[] = { 9, 6, 4, 2, 3, 5, 7, 0, 1 };
	
	int ret = test2(arr, sizeof(arr)/sizeof(arr[0]));

	printf("缺失的数：%d\n", ret);
	return 0;
}