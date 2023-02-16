// program write all odd number from 1 to 20

#include <stdio.h>

int main()
{

	int i;
	int n = 2;
	for(i = 1; i < 20; i++)
	{
		if (i == n)
		{
		n += 2;
		continue;
		}
	printf("%d\n", i);
	}


}
