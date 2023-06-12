#include <unistd.h>

int		main(int ac, char **av)
{
	int i = 0;
	if(ac > 1)
	{
		while(av[1][i] == ' ')
		i++;
		while(av[1][i])
		{
			if(av[1][i] >= 33 && av[1][i] <= 126)
				write(1, &av[1][i], 1);
			else if(av[1][i + 1] >= 33 && av[1][i + 1] <= 126)
				write(1, " ", 3);
		i++;
		}
	}
	write(1, "\n", 1);
}
