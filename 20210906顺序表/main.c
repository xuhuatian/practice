#include"head.h"

void menu()
{
	printf("**********************************\n");
	printf("**** 1.ͷ������    2.β������ ****\n");
	printf("**** 3.ͷɾ����    4.βɾ���� ****\n");
	printf("**** 5.��ӡ����    6.������� ****\n");
	printf("**** 7.���ɾ��    0.�˳�     ****\n");
	printf("**********************************\n");
	printf("��������Ĳ�����:>");
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
			printf("��������Ҫ�洢����������-1��β��\n");
			while (r != -1)
			{
				scanf_s("%d", &r);
				if (r != -1)
					SPushfront(&s1, r);
			}
			system("CLS");
			break;
		case 2:
			printf("��������Ҫ�洢����������-1��β��\n");
			while (r != -1)
			{
				scanf_s("%d", &r);
				if (r != -1)
					SPushBack(&s1, r);
			}
			system("CLS");
			break;
		case 3:
			printf("ɾ��ǰ���ٸ���:>");
			scanf_s("%d", &r);
			for (int i = 0; i < r; i++)
				SPopFront(&s1);
			system("CLS");
			break;
		case 4:
			printf("ɾ������ٸ���:>");
			scanf_s("%d", &r);
			for (int i = 0; i < r; i++)
				SPopBack(&s1);
			system("CLS");
			break;
		case 5:
			SPrint(&s1);
			break;
		case 6:
			printf("��Ҫ�ӵڼ���������:>");
			scanf_s("%d", &r);
			printf("�������:>");
			scanf_s("%d", &t);
			shuijicaru(&s1, r, t);
			system("CLS");
			break;
		case 7:
			printf("��Ҫɾ���ڼ�����:>");
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