// reverse an array using pointer

#include <stdio.h>
#define N 5

int main()
{

	int a[N], *p;
	printf("Enter the array Element \n");
	for(p = a; p <= a+N-1; p++)
	{
	scanf("%d", p);
	}

	printf("The reverse of the array is :\n");

	for(p = a+N-1; p >= a; p--)
	{
	
	printf("%d \n", *p);
	}
}
