#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list *ft_lst_init(int data)
{
	t_list *node = malloc(sizeof(t_list));
	if(!node)
		return (NULL);
	int *value = malloc(sizeof(int));
	if(!value)
		return (NULL);
	*value = data;
	node->data = value;
	node->next = NULL;
	return (node);
}

t_list *ft_list_add(t_list *lst, int data)
{
	t_list *node = malloc(sizeof(t_list));
	if(!node)
		return (NULL);
	int *value = malloc(sizeof(int));
	if(!value)
		return (NULL);
	*value = data;
	node->data = value;
	node->next = NULL;
	if(!lst)
		return (NULL);
	t_list *next = lst;
	t_list *last_node;
	while (next)
	{
		last_node = next;
		next = next->next;
	}
	last_node->next = node;
	return (lst);
}

void ft_lst_print(t_list *lst)
{
	t_list *next = lst;
	while(next)
	{
		printf("[%d]\n", *(int *)(next->data));
		next = next->next;
	}
}

void ft_lst_free(t_list *lst)
{
	t_list *next = lst;
	t_list *curr;
	while(next)
	{
		curr = next;
		next = next->next;
		free(curr->data);
		free(curr);
	}
}

int main(void)
{
	t_list *lst = ft_lst_init(20);
	ft_list_add(lst, 50);
	ft_list_add(lst, 10);
	ft_list_add(lst, 40);
	ft_list_add(lst, 30);
	ft_lst_print(lst);
	printf("List size : %d\n", ft_list_size(lst));
	ft_lst_free(lst);
	return (0);
}
