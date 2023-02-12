#include <stdio.h>
#include <stdlib.h>

int increment();

int main()
{
	int value;
	value = increment();
	value = increment();
	value = increment();

	printf("%d\n", value);
}

int increment()
	

{

	static int count;	
	count = count + 1;
	return count;
}
