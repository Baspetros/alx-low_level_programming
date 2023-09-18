#include "main.h"
/**
 * char *_strcpy - main function
 * @dest: parameter 1
 * @src: parameter 2
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int y = 0;
	int v = 0;

	while (*(src + y) != '\0')
	{
		y++;
	}
	for (; v < y ; v++)
	{
		dest[v] = src[v];
	}
	dest[y] = '\0';
	return (dest);
}
