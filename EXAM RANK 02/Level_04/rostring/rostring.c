#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
char	**ft_split(char *str)
{
	char **tab;
	int index = 0;
	int a = 0;
	int b = 0;
	tab = (char **)malloc(sizeof(char *) * 1000);
	while(str[index] == ' ' || str[index] == '\t' || str[index] == '\n')
	index++;
	while(str[index])
	{
		if(str[index] > 32)
		{
			tab[a] = (char *)malloc(sizeof(char) * 1000);
			b = 0;
			while(str[index] > 32)
			{
				tab[a][b] = str[index];
				index++;
				b++;
			}
			tab[a][b] = '\0';
			a++;
		}
		else
		index++;
	}
	return tab;
}

int		main(int ac, char **av)
{
	int i;
	char **tab;

	i = 1;
	if (ac > 1)
	{
		tab = ft_split(av[1]);
		while (tab[i])
		{
			ft_putstr(tab[i]);
			write(1, " ", 1);
			i++;
		}
		ft_putstr(tab[0]);
	}
	write(1, "\n", 1);
	return (0);
}
