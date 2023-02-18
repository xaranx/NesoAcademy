#include <stdio.h>

int main()
{
// counting how many degit ..
	int number, count = 0, cnt, mul = 1, result = 0, rem;
	printf("Please write a number ?\n");
	scanf("%d", &number);
	
 	int n = number;

	while (n != 0)
	{
	n = n/10;
	count++;
	}
	
	cnt = count;
	n = number;
// multiplay each degit by order ex 5*5*5	
	while(n != 0)
	{
	rem = n%10;
		
		while(cnt !=0)
		{
		mul = mul*rem;
		cnt--;
		}

		result = result + mul;
		cnt = count;
		n = n/10;
		mul = 1;
	}

	if(result == number)
	
		printf("%d is an Armstrong\n", number);
	
	else
		printf("%d is NOT an Armstring\n", number);
	
 return 0;
}
