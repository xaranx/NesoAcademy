//this program will allow you to convert a binary number into a decimal

#include <stdio.h>

int main()
{

	int binary, rem, weight, decimal;
	
	decimal = 0;
	weight = 1;

	printf("please enter the binary number ?");
	scanf("%d", &binary);

	while(binary != 0)
	{
	rem = binary%10;
	decimal = decimal + rem*weight;
	binary = binary/10;
	weight  = weight*2;
	}
	printf("decimal number is : %d\n", decimal);
}
