#include "sort.h"

/**
*bubble_sort - sorts an array of integers in ascending order
*@array: array of integers
*@size: size of array
*Return: void
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	if (array == NULL || size < 2)
	{
		return (1);
	}

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = tmp;

				print_array(array, size);

			}
		}
	}
}
