//this program will allow you to do an addition without '+' sine 

#include <stdio.h>

int main()
{
int x, y;

printf("enter the number x :");
scanf("%d", &x);

printf("enter the number y :");
scanf("%d", &y);

if(y > 0)
{

while( y != 0)
{

	x++;
	y--;
}

}
else if(y < 0)
{
while(y != 0)
{
	x--;
	y++;
}

}
else 
{
printf("you did entered an number NOT integer\n");
}


printf("the addition of x and y is : %d\n" , x);

}
