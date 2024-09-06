#include "sort.h"

/**
 * selection_sort - selection sort an array
 * @array: array to sort
 * @size: size of @array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;

	if (!array || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}
		if (min_index != i)
		{
			swap(&array[i], &array[min_index]);
			print_array(array, size);
		}
	}
}
/**
 * swap - Swaps two elements in an array
 * @a: Pointer to the first element
 * @b: Pointer to the second element
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
