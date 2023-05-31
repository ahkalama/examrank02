#include <stdio.h>
#include <stdlib.h>

void	fprime(int nbr)
{
	int i = 2;
		while(nbr >= i)
		{
			while(nbr % i == 0)
			{
				printf("%d", i);
				if(nbr == i)
					break;
					printf("*");
				nbr /= i;
			}
			i++;
		}
}

int	main(int ac, char **av)
{
	if(ac == 2)
			fprime(atoi(av[1]));
	printf("\n");
}
