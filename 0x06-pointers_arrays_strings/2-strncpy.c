#include "main.h"
/**
 * _strncpy - main func
 * @dest: para 1
 * @src: para 2
 * @n: para 3
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int f;

	f = 0;
	while (f < n && src[f] != '\0')
	{
		dest[f] = src[f];
		f++;
	}
	while (f < n)
	{
		dest[f] = '\0';
		f++;
	}
	return (dest);
}
