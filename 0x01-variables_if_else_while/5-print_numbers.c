#include <stdio.h>
/**
*main - Entry point
*Description: lower case
*Return: Always 0 (Success)
*
*/
int main(void)
{
	char number = '0';

	for (number = 0'; number <= '9'; number++)
	{
		putchar(number);
	}
putchar('\n');
return (0);
}
