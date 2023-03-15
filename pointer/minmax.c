#include <stdio.h>

void minMax(int arr[], int len, int *min, int *max)
{

*min = *max = arr[0];
int i;
for(i = 1; i < len; i++)
{

if(arr[i] > *max)
	*max = arr[i];

if(arr[i] < *min)
	*min = arr[i];
	
}
}

int main()
{

int min, max, i;
int a[] = {23,10,240,123,986,3,4,987,48,9,95,326,260};

int len = sizeof(a)/sizeof(a[0]);

minMax(a, len, &min, &max);

printf("Minimum value in the array is: %d and the Maximum is %d \n", min, max);


}
