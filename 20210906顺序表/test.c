#include"head.h"


void SInit(struct S* s1)
{
	assert(&s1);
	s1->a = (int*)malloc(4);
	s1->size = 0;
	s1->capacity = 0;
}

void SPushfront(S* s1, int x)
{
	if (s1->size == s1->capacity)
	{

		int newcapacity = s1->capacity == 0 ? 4 : s1->capacity * 2;
		int* tmp = (int*)realloc(s1->a, newcapacity * sizeof(int));
		if (tmp == NULL)
		{
			printf("À©ÈÝÊ§°Ü£¡\n");
			exit(-1);
		}
		else
		{
			s1->a = tmp;
			s1->capacity = newcapacity;

		}
	}
	if (s1->size != 0)
	{
		
		int end = s1->size;

		for (; end >= 0; end--)
		{
			s1->a[end + 1] = s1->a[end];

		}
		s1->a[0] = x;
		s1->size++;
	}
	else
	{
		s1->a[s1->size] = x;
		s1->size++;
	}
}

void SPushBack(S* s1,int x)
{
	if (s1->size == s1->capacity)
	{

		int newcapacity = s1->capacity == 0 ? 4 : s1->capacity * 2;
		int* tmp = (int*)realloc(s1->a, newcapacity * sizeof(int));
		if (tmp == NULL)
		{
			printf("À©ÈÝÊ§°Ü£¡\n");
			exit(-1);
		}
		else
		{
			s1->a = tmp;
			s1->capacity = newcapacity;

		}
	}
	s1->a[s1->size] = x;
	s1->size++;
}


void SPopBack(S* s1)
{
	assert(s1->size > 0);

	s1->a[s1->size - 1] = 0;
	s1->size--;

}

void SPopFront(S* s1)
{
	assert(s1->size > 0);



	memmove(&s1->a[0], &s1->a[1], s1->size * 4);

	s1->size--;

}

void SPrint(S* s1)
{
	int i = 0;
	for (i = 0; i < s1->size; i++)
	{
		printf("%d ", s1->a[i]);
	}
	printf("\n");
}


void shuijicaru(S* s1, int x,int n)
{
	assert(s1->size > x);

	if (s1->size == s1->capacity)
	{

		int newcapacity = s1->capacity == 0 ? 4 : s1->capacity * 2;
		int* tmp = (int*)realloc(s1->a, newcapacity * sizeof(int));
		if (tmp == NULL)
		{
			printf("À©ÈÝÊ§°Ü£¡\n");
			exit(-1);
		}
		else
		{
			s1->a = tmp;
			s1->capacity = newcapacity;

		}
	}

	int end = s1->size - 1;
	while (end >= x)
	{
		s1->a[end + 1] = s1->a[end];
		end--;
	}
	s1->a[x] = n;
	s1->size++;

}

void Sdel(S* s1, int x)
{
	assert(s1->size > x);

	int end = s1->size - 1;

	while (end >= x)
	{
		s1->a[x - 1] = s1->a[x];
		x++;
	}
	s1->size--;



}

void finish(S* s1)
{
	printf("ÍË³ö£¡");
	free(s1->a);
	s1->a = NULL;
	s1->capacity = s1->size = 0;
}