#include "stdio.h"

void do_print(char* msg)
{
	printf("%s\n", msg);
}

int main(int argc, char* argv[])
{
	if (argc <= 1)
		do_print("No args!");
	else
		do_print(argv[1]);

	return 0;
}
