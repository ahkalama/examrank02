/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msariasl_sort_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:22:43 by msariasl          #+#    #+#             */
/*   Updated: 2023/01/25 13:24:29 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct s_list t_list;

struct s_list
{
	int data;
	t_list *next;
};

int compare(int a, int b)
{
	if (a > b)
		return 0;
	else
		return 1;
}

t_list *sort_list(t_list *lst, int (*cmp)())
{
	t_list *tmp;
	int lol;
	
	tmp = lst;
	while(lst->next != 0)
	{
		
		if((*cmp)(lst->data,lst->next->data)==0)
		{
			lol = lst->data;
			lst->data = lst->next->data;
			lst->next->data = lol;
			lst=tmp;
		}else
			lst = lst->next;
		
		
	}
	lst = tmp;
	return lst;
}

int main()
{
	t_list *start;
	t_list list_a,list_b,list_c,list_d,list_e;
	list_a.data = 36;
	start = &list_a;
	list_a.next = &list_b;
	list_b.data = 66;
	list_b.next = &list_c;
	list_c.data = 22;
	list_c.next = &list_d;
	list_d.data = 11;
	list_d.next = &list_e;
	list_e.data = 128;

	start = sort_list(start,compare);

	while(start->next != 0)
	{
		printf("%d\n",start->data);
		start = start->next;
	}
	printf("%d\n",start->data);
}