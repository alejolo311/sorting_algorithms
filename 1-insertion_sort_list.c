#include "sort.h"
void insertion_sort_list(listint_t **list)
{
	listint_t *aux, *tail, *head, *swap_1, *swap_2, *aux_1, *aux_2;

	if (list == NULL || *list == NULL)
		return;
	head = *list;
	while (head != NULL && head->next != NULL)
	{
		if (head->n > head->next->n)
		{
			swap_1 = head, swap_2 = head->next;
			aux_1 = swap_1->prev, aux_2 = swap_2->next;
			if (aux_1 != NULL)
				aux_1->next = swap_2;
			else
				*list = swap_2;
			aux_2 != NULL ? aux_2->prev = swap_1 : aux_2;
			swap_2->prev = aux_1, swap_1->next = aux_2;
			swap_2->next = swap_1, swap_1->prev = swap_2;
			print_list(*list), tail = head, head = head->prev;
			while (head && head->prev)
			{ aux = head;
				if (aux->n < aux->prev->n)
				{
					swap_1 = aux->prev, swap_2 = aux;
					aux_1 = swap_1->prev, aux_2 = swap_2->next;
					if (aux_1 != NULL)
						aux_1->next = swap_2;
					else
						*list = swap_2;
					aux_2 != NULL ? aux_2->prev = swap_1 : aux_2;
					swap_2->prev = aux_1, swap_1->next = aux_2;
					swap_2->next = swap_1, swap_1->prev = swap_2;
					print_list(*list);
				}
				else
					break;
			} head = tail;
		} else
			head = head->next;
	}
}
