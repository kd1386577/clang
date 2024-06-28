#include<stdio.h>
main()
{

	char data1[20] = "banana",*p_data1;
	char data2[20],*p_data2;
	char* p = "peach";
	p_data1 = data1;
	p_data2=data2;
	while (*p_data2++=*p_data1++);
	{
		p_data1 = data1;
	}
		while (*p_data1++=*p++);
		printf("data1[]=%s\n", data1);
		printf("*p_data2[]=%s\n", data2);
}