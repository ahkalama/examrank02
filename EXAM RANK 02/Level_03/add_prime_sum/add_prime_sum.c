#include <unistd.h>

int ft_atoi(char *str)
{
    int res = 0;
    while(*str)
    {
        res = res * 10 + *str - '0';
        str++;
    }
    return(res);
}

void ft_putnbr(int num)
{
    if(num > 9)
        ft_putnbr(num / 10);
    write(1, &"0123456789"[num % 10], 1);
}

int is_prime(int num)
{
    if(num <= 1)
        return(0);
    else if(num % 2 == 0 && num > 2)
        return(0);
    else if(num % 3 == 0 && num > 3)
        return(0);
    return(1);
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int num = ft_atoi(argv[1]);
        int sum = 0;
        while(num > 0)
        {
            if(is_prime(num--))
            {
                sum += (num + 1);
            }
        }
        ft_putnbr(sum);
    }
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}
