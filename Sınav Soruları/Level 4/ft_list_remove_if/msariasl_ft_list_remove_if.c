/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msariasl_ft_list_remove_if.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:00:57 by msariasl          #+#    #+#             */
/*   Updated: 2023/01/24 13:12:32 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if(begin_list==0 || *begin_list==0)
		return;
		
	t_list *start = *begin_list;

	if(cmp(start->data,data_ref)==0)
	{
		*begin_list = start->next;
		free(start);
		ft_list_remove_if(begin_list,data_ref,cmp);
	}
	start= *begin_list;
	ft_list_remove_if(&start->next,data_ref,cmp);
}