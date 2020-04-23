#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("helloWorld!\n");
    printf("\n");
}

int add(int x, int y)
{
	return (x + y);
}

int sub(int x, int y)
{
	return (x - y);
}

int mul(int x, int y)
{
	return (x * y)
}

int div(int x, int y)
{
	if (!y)
		return -1;
	return (x / y);
}



