/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msariasl_flood_fill.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:15:57 by msariasl          #+#    #+#             */
/*   Updated: 2023/01/23 15:36:31 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_point
{
	int x;
	int y;
} t_point;

void fill(char **tab, t_point size, t_point begin, char schar)
{
	if (begin.x >= size.x || begin.x < 0 || begin.y >= size.y || begin.y < 0 || tab[begin.y][begin.x] != schar)
		return;

	tab[begin.y][begin.x] = 'F';

	fill(tab, size, (t_point){begin.x + 1, begin.y}, schar);
	fill(tab, size, (t_point){begin.x - 1, begin.y}, schar);
	fill(tab, size, (t_point){begin.x, begin.y - 1}, schar);
	fill(tab, size, (t_point){begin.x, begin.y + 1}, schar);

}

void flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}

char **make_area(char **zone, t_point size)
{
	char **new;

	new = malloc(sizeof(char *) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main()
{

	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char **area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {4, 0};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}
