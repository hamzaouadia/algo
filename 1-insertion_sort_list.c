#include "sort.h"

/**
 *	insertion_sort_list - read description
 *
 *	@list: linked list of intigers.
 *	Description: function that sorts an array of integers
 *		in ascending order using the  Insertion sort algorithm.
 *	Return: no return.
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp;
	int save = 0;

	if (!list)
		return;
	tmp = *list;
	while (tmp->next)
	{
		if (tmp->n > tmp->next->n)
		{
			save = tmp->n;
			*(int *)&tmp->n = tmp->next->n;
			*(int *)&tmp->next->n = save;
			tmp = *list;
			print_list(*list);
		}
		else
			tmp = tmp->next;
	}
	
}
