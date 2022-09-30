#include <stdio.h>
#include "main.h"

/**
 *main - printf program name
 *@argc: no of arguments
 *@argv: array of string parameters
 *Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
