#include<stdio.h>
void sort(int* array, int size, int order);
main()
{
	int i,order;
	int data[10] = { 10,9,8,7,6,5,4,3,2,1, };
	printf("ソート方向を入力：(0:昇順/1:降順)>");
	scanf("%d", &order);
	sort(data, 8, order);
	for (i = 0; i < 8; i++)
	{
		printf("%d", data[i]);
	}
}
void sort(int* attay, int size, int order)
{
	int i, j, w;
	if (order = 0)
	{
		for (i = 0; i < size-1; i++)
		{
			for(j=i+1;j<size;j++)
			{
				if (*(array + i) < *(array + j))
				{
					w = *(array + i);
					*(array + i) = *(array + j);
					*(array + j) = w;
				}
			}
		}
	}
}
else
{
	if (order = 0)
	{
		for (i = 0; i < size - 1; i++)
		{
			for (j = i + 1; j < size; j++)
			{
				if (*(array + i) > *(array + j))
				{
					w = *(array + i);
					*(array + i) = *(array + j);
					*(array + j) = w;
				}
			}
		}
	}
}
}