// this program allow you to print the number of fibonacci of 'n'

#include <stdio.h>

int main()
{

	int i, a, b, n, result;
	
	printf("enter the number n ?\n");
	scanf("%d", &n);
	a = 0;
	b = 1;

	for (i = 1; i <= n; i++)
	{
	printf("%d ", a);
	result = a + b;
	a = b;
	b =  result;
	}
	printf("\n");

}
