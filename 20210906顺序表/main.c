#include"head.h"

void menu()
{
	printf("**********************************\n");
	printf("**** 1.头插数据    2.尾插数据 ****\n");
	printf("**** 3.头删数据    4.尾删数据 ****\n");
	printf("**** 5.打印数据    6.随机插入 ****\n");
	printf("**** 7.随机删除    0.退出     ****\n");
	printf("**********************************\n");
	printf("请输入你的操作项:>");
}




int main()
{
	S s1;
	SInit(&s1);


	int ret = 1;
	
	while (ret)
	{
		menu();
		scanf_s("%d", &ret);
		system("CLS");
		int r = 0;
		int t = 0;

		switch (ret)
		{
		case 1:
			printf("请输入你要存储的数，并以-1结尾！\n");
			while (r != -1)
			{
				scanf_s("%d", &r);
				if (r != -1)
					SPushfront(&s1, r);
			}
			system("CLS");
			break;
		case 2:
			printf("请输入你要存储的数，并以-1结尾！\n");
			while (r != -1)
			{
				scanf_s("%d", &r);
				if (r != -1)
					SPushBack(&s1, r);
			}
			system("CLS");
			break;
		case 3:
			printf("删掉前多少个数:>");
			scanf_s("%d", &r);
			for (int i = 0; i < r; i++)
				SPopFront(&s1);
			system("CLS");
			break;
		case 4:
			printf("删掉后多少个数:>");
			scanf_s("%d", &r);
			for (int i = 0; i < r; i++)
				SPopBack(&s1);
			system("CLS");
			break;
		case 5:
			SPrint(&s1);
			break;
		case 6:
			printf("你要从第几个数插入:>");
			scanf_s("%d", &r);
			printf("插入的数:>");
			scanf_s("%d", &t);
			shuijicaru(&s1, r, t);
			system("CLS");
			break;
		case 7:
			printf("你要删除第几个数:>");
			scanf_s("%d", &r);
			Sdel(&s1,r);
			system("CLS");
			break;
		case 0:
			finish(&s1);
			break;

		default:
			break;
		}

	}
	return 0;
}