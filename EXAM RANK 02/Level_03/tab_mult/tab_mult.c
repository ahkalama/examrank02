#include <unistd.h>

int ft_atoi(char *str)
{
    int res = 0;
    while(*str)
    {
        res = res * 10 + (*str - '0');
        str++;
    }
    return (res);
}
void    ft_putnbr(int nb)
{
    if(nb > 9)
        ft_putnbr(nb / 10);
    write(1, &"0123456789"[nb % 10], 1);
}

int	main(int argc, char *argv[])
{
	int	i = 1;
	int nbr;
	if(argc != 2)
		write(1, "\n", 1);
	else
	{
		nbr = ft_atoi(argv[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nbr);
			write(1, " = ", 3);
			ft_putnbr(i * nbr);
			write(1, "\n", 1);
			i++;
		}
	}
}
