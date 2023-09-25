#include "sort.h"

/**
 *	selection_sort - read description
 *
  *	@array: array of intigers.
 *	@size: size of the array.
 *	Description: function that sorts an array of integers
 *		in ascending order using the  Selection sort algorithm.
 *	Return: no return.
*/

void selection_sort(int *array, size_t size)
{
	int save = 0;
	int index;

	for (size_t i = 0; i < size - 1; i++)
	{
		index = i;
		for (size_t j = i + 1; j < size; j++)
		{
			if (array[index] > array[j])
				index = j;
		}
		save = array[i];
		array[i] = array[index];
		array[index] = save;
		if (index != i)
			print_array(array, size);
	}
}
