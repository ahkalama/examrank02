#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 0;
	int s;

	while(av[1][i])
	{
		if(av[1][i] >= 'a' && av[1][i] <= 'z' || av[1][i] >= 'Z' && av[1][i] <= 'Z')
		{
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
			s = av[1][i] - 97;
			else
			s = av[1][i] - 65;
			while(s >= 0)
			{
				write(1, &av[1][i], 1);
				s--;
			}
		}
		else
			write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
}