#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *node;
	t_list *swap;
	int temp;
	node = lst;
	while(node)
	{
		swap = node->next;
		while (swap)
		{
			if(!cmp(node->data,swap->data))
			{
				temp = node->data;
				node->data = swap->data;
				swap->data = temp;
			}
			swap = swap->next;
		}
		node = node->next;
	}
	return (lst);
}
