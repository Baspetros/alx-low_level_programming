#include "main.h"
/**
 * print_array - main function
 * @a: parameter 1
 * @n: parameter 2
 * Return: a and n
 */
void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < (n - 1); z++)
	{
		printf("%d,", a[z]);
	}
	if (z == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
