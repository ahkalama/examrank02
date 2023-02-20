#include <stdlib.h>
#include "sort_list.list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int	swap;
	t_list	*tmp;

	tmp = lst;
	while(lst->next != NULL)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}

#include <stdio.h>

int main()
{
	t_list *start;

	t_list aloha;
	aloha.data = 5;

	t_list volador;
	volador.data = 3;

	t_list soupersun;
	soupersun.data=145;

	aloha.next = &volador;
	volador.next = &soupersun;

	start = &aloha;
	while(start->data != 0)
	{
		int data = start->data;
		printf("\n%d\n",data);
		if(start->next != 0)
		start = start->next;
		else
		break;
	}
	
}
