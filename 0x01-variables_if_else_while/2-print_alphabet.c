#include < stdio.h >
/**
*main - Entry point
*Description: lower case
*Return: Always 0 (Success)
*/
int main(void)
{
char ch = 'a';
putchar("Lowercase English Alphabets:\n");
while (ch <= 'z')
{
putchar("%c ", ch);
ch++;
}
putchar("\n");

return (0);
}
