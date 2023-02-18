// program to check if the entered number is a prime number 
// prime number is only devisible by 1 and itself
// 1 is NOT a prime number 

#include <stdio.h>
#include <math.h>

int main()
{
int x;
printf("Please enter a number (only positive number )");
scanf("%d", &x);
int i, val1, val2, count =0;

val1 = ceil(sqrt(x));
val2 = x;

for(i = 2; i <= val1; i++)
{
if(val2%i == 0)
	count = 1;
}

if((count == 0 && val2 != 1) || val2 == 2 || val2 == 3 )
	printf("%d is a prime number\n", val2);
else
	printf("%d is not a prime number\n", val2);

}
