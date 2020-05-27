
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

//#include "hello_world.h"
 
void child_process() {
	char *new_arg[] = { NULL };
	char *new_env[] = { NULL };
	printf("Initing child...\n");
	execve("/child", new_arg, new_env);
	perror("execve");
	printf("Erro?\n");
}

void parent_process() {
	while(1) {
		sleep(1);
		printf("1 - parent\n");
	}
}

int main() {
	pid_t pid;
	pid = fork();
	if (pid == 0)
		child_process();
	else
		parent_process();
	return 0;
}

