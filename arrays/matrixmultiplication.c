// multiplication of 2 ThreeD Matrix

#include <stdio.h>

int main()
{
int i, j , k;
int MAX = 3;

// Take input for matrix a

int a[MAX][MAX];
int arows, acolumns;
printf("Enter the rows and columns of matrix a :");
scanf("%d  %d", &arows, &acolumns);

printf("Enter the element of matrix a:\n");

for(i = 0; i < arows; i++)
{
for(j = 0; j < acolumns; j++)
{

scanf("%d", &a[i][j]);
}

}

//take input for matrix b

int b[MAX][MAX];
int brows, bcolumns;

printf("Enter the rows and columns of matrix b :");
scanf("%d  %d", &brows, &bcolumns);

printf("Enter the element of matrix b:\n");

for(i = 0; i < brows; i++)
{

for(j = 0; j < bcolumns; j++)
{

scanf("%d", &b[i][j]);
}
}

//output for Multiplication matrix 
int product[MAX][MAX];
int sum = 0;

for( i = 0; i < arows; i++)
{

for(j = 0; j < bcolumns; j++)
{

for(k = 0; k < bcolumns; k++)
{

	sum += a[i][k] * b[k][j];

}
product[i][j] = sum;
sum = 0;
}
}

//printing the array of element 
printf("---------The product of matrix a and b is : ---------\n");

for(i = 0; i < arows; i++)
{
for(j  = 0; j < bcolumns; j++)
{
printf("%d ", product[i][j]);
}
printf("\n");
}


}
