// sum of array element


#include <stdio.h>

int main()

{
int a[] = {23, 43, 87, 9, 5};

int sum = 0, *p;

for( p = &a[0]; p <= &a[4]; p++)
	sum += *p;

printf("the sum of the array is : %d\n", sum);

}
