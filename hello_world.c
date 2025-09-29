#include <stdio.h>

int main(int argc, char** argv)
{
	if (argc > 0)
		printf("Hello, world! My name is %s\n", argv[0]);
	else
		printf("Hello, world! My name is anonymouse\n");
	return 0;
}
