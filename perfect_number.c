//program checking if the number is perfect or NOT
//what is a perfect number? a number which equal to the sum of it's divisor exculusing him

#include <stdio.h>

int main()
{
int number;

printf("Enter the number n ?");
scanf("%d", &number);
 
int rem, i, sum = 0;

for(i =1; i < number; i++)
{
rem = number%i;

if(rem == 0)
{
sum = sum + i;
printf("%d ", i);
}

}
if(sum == number)
	printf("\n%d is a perfect number \n", number);
else 
	printf("\n%d is NOT a perfect number \n", number);

}
