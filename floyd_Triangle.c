// this program allow you to write a floyd triangle 

#include <stdio.h>

int main()
{

	int i, j, n, rows;

	printf("please write how many rows you need in your triangle  ?");
	scanf("%d", &rows);
	
	n = 1;

	for(i = 1; i <= rows; i++)
	{
		
		for(j = 1; j <= i; j++)
		{
		printf("%d ", n);
		n++;
		}
		printf("\n");
	}
}
