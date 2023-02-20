#include <stdio.h>

int main()
{

	int base, expo, exponent, power = 1;
	double power1 = 1.0;
	printf("Enter the base number ?");
	scanf("%d", &base);

	printf("Enter the exponent number ?");
	scanf("%d", &exponent);
	
	expo = exponent;

	if(exponent > 0)
	{
	while(exponent != 0)
	{
	
	power = power * base;
	exponent--;

	}
	printf("%d to the power of %d is: %d\n", base, expo, power);
	}
	else
	{
	while(exponent != 0)
	{
	power1 = power1 * (1.0/base);
	exponent++;

	}
	printf("%d to the power of %d is: %.10f\n", base, expo, power1);
	}

}

