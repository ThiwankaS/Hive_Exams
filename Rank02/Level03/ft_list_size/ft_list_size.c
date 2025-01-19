#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list *next = begin_list;
	int count = 0;
	while(next)
	{
		count++;
		next = next->next;
	}
	return (count);
}
