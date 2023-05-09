#include <unistd.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    int res = 0;
    while(*str)
    {
        res = res * 10 + (*str - 48);
        str++;   
    }
    return (res);  
}
void    ft_putchar(char c)
{
    write(1, &c, 1); 
}
void    ft_putnbr(int num)
{
    if(num > 9)
    {
        ft_putnbr(num / 10);
        ft_putnbr(num % 10);
    }
    else
        ft_putchar((num % 10) + '0');
}
#include "stdio.h"
int main(int ac, char **av)
{
    int i = 1;
    int num = ft_atoi(av[1]);
    while(i <= 9)
    {
        ft_putnbr(i);
        write(1, "x", 1);
        ft_putnbr(num);
        write(1, "=", 1);
        ft_putnbr(i * num);
        write(1, "\n", 1);
        i++;
    }
}