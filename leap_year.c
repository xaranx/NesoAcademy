// program to check if the Year is Leap or NOT

#include <stdio.h>

int main()
{

int year;
printf("Enter the Year ?");
scanf("%d", &year);

if((year%400 == 0) ||(year%4 == 0))
{
printf("%d :is a Leap year\n", year);
}
else
{
printf("%d :is NOT a Leap year\n" ,year);
}
}
