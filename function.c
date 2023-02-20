#include <stdio.h>

int areaOfRec(int length, int breadth)
{
int area;
area = length * breadth;
return area;
}

int main()
{
	int l = 10, b = 5;
	int area = areaOfRec(l,b);
	printf("%d \n", area);

	l = 7, b = 8;
	printf("%d \n", areaOfRec(l,b));

return 0;
}
