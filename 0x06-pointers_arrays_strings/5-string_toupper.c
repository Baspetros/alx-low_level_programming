#include "main.h"
/**
 * string_toupper - main function
 * @n: pointer
 * Return: n
 */
char *string_toupper(char *n)
{
	int r;

	r = 0;
	while (n[r] != '\0')
	{
		if (n[r] >= 'a' && n[r] <= 'z')
			n[r] = n[r] - 32;
		n++;
	}
	return (n);
}
