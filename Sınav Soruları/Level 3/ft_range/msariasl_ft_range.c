/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msariasl_ft_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:09:26 by msariasl          #+#    #+#             */
/*   Updated: 2023/01/23 11:57:25 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
	int i = 0;
	int size = end - start + 1;
	int *array = (int *)malloc(sizeof(int) * size);

	if (!array)
		return (NULL);
	while (i < size)
	{
		array[i] = start + i;
		printf("%d",array[i]);
		i++;
	}
		
	array[i] = 0;

	return array;
}

int main()
{
	int *la = ft_range(-5, 6);

}