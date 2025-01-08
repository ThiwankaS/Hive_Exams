#include <stdlib.h>
#include <stdio.h>
#include "list.h"

int ascending(int a, int b)
{
	return (a <= b);
}
t_list *ft_lstnew(int data)
{
	t_list *node = malloc(sizeof(t_list));
	node->data = data;
	node->next = NULL;
	return (node);
}
void ft_lstadd(t_list *lst, int data)
{
	t_list *new_node = malloc(sizeof(t_list));
	new_node->data = data;
	new_node->next = NULL;
	while(lst && lst->next)
		lst = lst->next;
	lst->next = new_node;
}

void ft_lstprint(t_list *lst)
{
	int count = 0;
	while(lst)
	{
		printf(" node [%d] : %d\n", count, lst->data);
		lst = lst->next;
		count++;
	}
}
void ft_lstclear(t_list **lst)
{
	t_list *current;
	t_list *next;

	if(!lst || !*lst)
		return;
	current = *lst;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*lst = NULL;
}

int main(void)
{
	t_list *lst = ft_lstnew(35);
	ft_lstadd(lst,5);
	ft_lstadd(lst,15);
	ft_lstadd(lst,20);
	ft_lstadd(lst,25);
	ft_lstadd(lst,10);
	ft_lstadd(lst,30);
	ft_lstprint(lst);
	printf("sorted list : \n");
	t_list *temp = sort_list(lst,ascending);
	ft_lstprint(temp);
	ft_lstclear(&lst);
	free(lst);
	return (0);
}
