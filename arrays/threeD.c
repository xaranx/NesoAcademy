#include <stdio.h>


int main()
{
//int arr[2][3][3] 2array 3columns 3rows


	int a[2][2][3] = {{{1,2,3}, {4,5,6}}, {{7,8,9}, {11,12,13}}};
	int i, j, k;
	
	// list array element 
	
	for(i = 0; i < 2; i++)
	{
	
		for(j = 0; j < 2; j++)
		{
		
			for(k = 0; k < 3; k++)
			{
			
			printf("%d ", a[i][j][k]);
			}
		}
	}

	printf("\n");
}
