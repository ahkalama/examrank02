/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msariasl_print_bits.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:24:16 by msariasl          #+#    #+#             */
/*   Updated: 2023/01/23 11:05:14 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <printf.h>

void print_bits(unsigned char octet)
{
	int i = 128;

	while (i > 0)
	{
		if(i & octet)
			write(1,"1",1);
			else
			write(1,"0",1);
		i>>=1;
	}
}

int main()
{
	print_bits(255);
}