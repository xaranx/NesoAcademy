#include <stdio.h>

int *findMid(int a[], int len)
{

return &a[len/2];
}

int main()
{

int a[] = {1,2,3,4,5,6,7};
int len = sizeof(a)/sizeof(a[0]);

int *mid = findMid(a,len);
printf("%d\n", *mid);
}
