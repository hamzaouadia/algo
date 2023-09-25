#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}

int ft_sorting(int *array, int size, int start, int end)
{
	int pivot = array[end];
	int i = start;
	int tmp;

	for (int j = start; j < end; j++)
	{
		if (array[j] < pivot)
		{
			if (j != i)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != end)
	{
		tmp = array[i];
		array[i] = array[end];
		array[end] = tmp;
		print_array(array, size);
	}
	return (i);
}

void ft_quick(int *array, int size, int start, int end)
{
	if (end <= start)
		return;
	int pivot = ft_sorting(array, size, start, end);
	ft_quick(array, size, start, pivot - 1); 
	ft_quick(array, size, pivot + 1, end); 
}

/**
 *	Quick sort - read description
 *
  *	@array: array of intigers.
 *	@size: size of the array.
 *	Description: function that sorts an array of integers
 *		in ascending order using the  Quick sort algorithm.
 *	Return: no return.
*/

void quick_sort(int *array, size_t size)
{
	ft_quick(array, size, 0, size - 1);
}


int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    quick_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
