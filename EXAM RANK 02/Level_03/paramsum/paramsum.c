#include <unistd.h>

void	ft_putnbr(int i)
{
	if(i >= 10)
		ft_putnbr(i / 10);
	write(1, &"0123456789"[i % 10], 1);
}

int		main(int ac, char **av)
{
	(void)av;
	ac--;
	ft_putnbr(ac);
	write(1, "\n", 1);
}
