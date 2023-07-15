//program version

#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while(av[1][i])
			i++;
		while(i)
			write(1, &av[1][--i], 1);
	}
	write(1, "\n", 1);
}

//function version

char *rev_print(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	while(i)
		write(1, &str[--i], 1);
	return str;
}
