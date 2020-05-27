#include <stdio.h>
#include <unistd.h>

int main() {
	while (1) {
		printf("2 - child\n");
		sleep(1);
	}
	return 0;
}
