#include <stdio.h>
#include <string.h>

int main(void)
{
	char command[100];
	printf("$ ");
	
	fgets(command, 100, stdin);
	command[strcspn(command, "\n")] = '\0';
	printf("%s", command);
	return 0;
}
