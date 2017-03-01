#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <stdio.h>
#include <signal.h>
struct process
{
	int traversal;
	pid_t pid,ppid;

};
int main( int argc, char* args[] )
{
	pid_t p_pid,c_pid;
	printf("I am main my pid is %d\n",getpid());
	c_pid = fork();
	if(c_pid == 0)
	{
		printf("I am child my pid is %d\n",getpid());
		printf("child in ./fork group id : %d\n",getpgrp());
	}else
	{
		printf("I am Parent my pid is %d\n",getpid());
		printf("parent in ./fork group id : %d\n",getpgrp());
	}

     return 0;
}

	
