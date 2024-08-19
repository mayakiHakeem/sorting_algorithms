#include "sort.h"

/**
 * bubble_sort - sort using bubble sort algo
 * @array: data to be sorted
 * @size: size of the array
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, swapped;
	int temp;

	for (i = 0; i < size; i++)
	{

		swapped = 0;
		for (j = 1; j < (size - i); j++)
		{
			if (array[j - 1] > array[j])
			{
				temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
			}

			swapped = 1;
			print_array(array, size);
		}

		if (!swapped)
			break;
	}
}
