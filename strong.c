#include <stdio.h>

int main()
{

int i, fact = 1, result = 0, n, q, rem;

printf("please enter a number\n");
	
scanf("%d", &n);

q = n;

while(q != 0)
{

	rem = q%10;

	for(i = 1; i <= rem; i++)
	{
	fact = fact*i;
	}

	result = result + fact;
	fact = 1;
	q = q/10;
}

if(result == n)
	printf("%d is a strong number\n", n);
else
	printf("%d is NOT a strong number\n" , n);
}
