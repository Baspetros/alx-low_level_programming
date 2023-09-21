#include "main.h"
/**
 * _strncat - main func
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int z;
	int y;

	z = 0;
	while (dest[z] != '\0')
	{
		z++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[z] = src[y];
		z++;
		y++;
	}
	dest[z] = '\0';
	return (dest);
}

