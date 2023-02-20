/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msariasl_ft_list_foreach.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:38:16 by msariasl          #+#    #+#             */
/*   Updated: 2023/01/25 13:59:45 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdio.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

void f(int *c)
{
	
	printf("%d\n",*c);
}

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *list_ptr;

	list_ptr = begin_list;
	while(list_ptr)
	{
		(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}

int main()
{
	t_list *head = (t_list*) malloc(sizeof(t_list));
	int c = 5;
	head->data = &c;

	t_list *next = (t_list*) malloc(sizeof(t_list));
	int d = 7;
	next->data= &d;
	head->next = next;

	ft_list_foreach(head, (void *)f);
	
}