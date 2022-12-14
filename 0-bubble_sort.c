#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - sorting algorithm
 * @array: input array
 * @size: size of array
 * Return: Always 0
 */

void bubble_sort(int *array, size_t size)
{
	int hold, h, k, j;

	if (size < 2)
		return;

	j = (int)size;
	for (h = 0; h < j; h++)
	{
		for (k = 0; k < j - h - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				hold = array[k];
				array[k] = array[k + 1];
				array[k + 1] = hold;
				print_array(array, size);
			}
		}
	}
}
