#include <stdio.h>
/**
*main - Entry point
*Description: number
*Return: Always 0 (Success)
*/
int main(void)
{
	int number = '0';

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
putchar('\n');
return (0);
}
