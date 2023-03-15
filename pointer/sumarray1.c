// passing an array as an argument ti a function 

#include <stdio.h>

int add(int b[], int len)
{
int sum = 0,  i;

for( i = 0; i < len; i++)
{
sum += b[i];

}
return sum;
}

int main()
{
	int len;
	int a[] = {1 , 2, 3, 4};
	len  = sizeof(a)/sizeof(a[0]);
	printf("%d \n", add(a , len));
}
