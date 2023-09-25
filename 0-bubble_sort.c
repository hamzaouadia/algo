#include "sort.h"

/**
 *	bubble_sort - read description
 *
 *	@array: array of intigers.
 *	@size: size of the array.
 *	Description: function that sorts an array of integers
 *		in ascending order using the Bubble sort algorithm.
 *	Return: no return.
*/

void bubble_sort(int *array, size_t size)
{
	int save = 0;

	if (size < 2 || array == NULL)
		return;
	for (size_t j = size; j > 0; j--)
	{
		for (size_t i = 0; i < size - 1; i++)
		{
			if (array[i + 1] < array[i])
			{
				save = array[i];
				array[i] = array[i + 1];
				array[i + 1] = save;
				print_array(array, size);
			}
		}
	}
}
