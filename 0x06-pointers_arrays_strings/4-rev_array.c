#include "main.h"
/**
 * reverse_array - main fun
 * @a: array
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int s;
	int h;

	for (s = 0; s < n--; s++)
	{
		h = a[s];
		a[s] = a[n];
		a[n] = h;
	}
}

