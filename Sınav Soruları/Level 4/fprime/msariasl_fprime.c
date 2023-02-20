/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msariasl_fprime.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:09:05 by msariasl          #+#    #+#             */
/*   Updated: 2023/01/23 12:57:06 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc != 2)
		return 0;

	argv++;
	int result = 1;
	int i = 1;
	// printf("%s\n",*argv);
	int arg = atoi(*argv);
	// printf("%d\n",arg);
	if (arg == 1)
		printf("1");
	while (arg >= i)
	{
		i++;
		if (arg % i == 0)
		{
			printf("%d", i);
			if(arg == i)
				break;
			printf("*");
			arg /= i;
			i = 1;
		}
	}
}