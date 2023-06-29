#inlcude "main.h"
/**
 * reverse_array - reverse any given array
 * @a: the array
 * @n: the number of element in array
 * Return: a
 */
void reverse_array(int *a, int n)
{
	int tmp, i, r;
	
	r = n - 1;
	for (i = 0 ; i < n / 2 ; i++)
	{
		tmp[i] = a[r];
		a[i] = a[r];
		a[r--] = tmp;
	}
}
