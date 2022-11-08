#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

void bubble_sort(int *array, size_t size)
{
	size_t h;
	int i;

	for(h = 0; h < size; h++)
	{
		if (array[h] > array[h + 1])
		{
			i = array[h];
			array[h] = array[h +1];
			array[h + 1] = i;
			print_array(array, size);
		}
		else
		{
			continue;
		}
	}
}
