#include <unistd.h>

int		max(int* tab, unsigned int len)
{
	int i = 0;
	int tmp = tab[i];
	while (i < len - 1)
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
// 	int a[4] = {-7,-42,0,-5};
// 	printf("%d", max(a, 4));
// }
