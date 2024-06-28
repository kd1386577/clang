#include <stdio.h>
main()
{
	int func_a(int ch)
	{
		if (isalpha(ch) || isdigit(ch))
			return 1;
		else
			return 0;
	}
}