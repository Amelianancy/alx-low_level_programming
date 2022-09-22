#include <main.h>
/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 * Return: a pointer to the resulting string
*/
char *_strcat(char *dest, char *src)

{
	int i, l;

	l = 0;
	while (dest[l] != '\0')
	l++;
	for (i = 0; src[i] != '\0'; i++)
	dest[l + i] = src[i];
	dest[l + i] = '\0';
return (dest);
}
