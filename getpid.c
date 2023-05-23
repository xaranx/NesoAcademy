#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t ppid;
	
	ppid = getppid();
	printf("the PID of the current process is : %d \n", ppid);
	return 0;
}
