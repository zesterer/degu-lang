#include "stdio.h"

/*namespace testing
{
	void do_print(char* msg)
	{
		printf("%s\n", msg);
	}
}*/

void do_print(char* msg)
{
	printf("%s\n", msg);
}

int main(int argc, char* argv[])
{
	do_print(argv[1]);
	return 0;
}
