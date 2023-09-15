#include "main.h"
/**
 * _isupper - main function
 * @c: function parameter
 * Return: 1 yes 0 no
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
