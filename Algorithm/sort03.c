#include<stdio.h>
main()
{
	int i, j, w;
	int d[5] = { 30,7,25,16,10 };
	
	for (i = 0; i <5; i++)
	{
		for (j =i-1; j = >= 1; j--)
		{
			if (d[j + 1] >= d[j])
			{
				w = d[j];
				d[j] = d[j + 1];
				d[j + 1] = w;
			}
		}
	}
	for (i = 0; i < 6; i++)
	{
		printf("%d\n", d[i]);
	}
}