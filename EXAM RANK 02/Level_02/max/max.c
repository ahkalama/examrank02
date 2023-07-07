#include <unistd.h>

int		max(int* tab, unsigned int len)
{
	unsigned int i = 0;
	int tmp = tab[i];
	while (i < len)
	{
		if(tmp < tab[i])
			tmp = tab[i];
		i++;
	}
	return (tmp);
}

// #include <stdio.h>
// int	main()
// {
// 	int a[4] = {-7,-42,-5, -3};
// 	printf("%d", max(a, 4));
// }
