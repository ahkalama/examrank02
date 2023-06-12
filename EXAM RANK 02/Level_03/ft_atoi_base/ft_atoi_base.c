#include <unistd.h>
#include <stdlib.h>

int ft_isvalid(char c, int base)
{
    char digits[17] = "0123456789abcdef";
    char digits2[17] = "0123456789ABCDEF";
    while (base--)
        if (digits[base] == c || digits2[base] == c)
            return (1);
    return (0);
}

int ft_value_of(char c)
{
    if (c >= '0' && c <= '9')
        return (c - '0');
    else if (c >= 'a' && c <= 'f')
        return (c - 'a' + 10);
    else if (c >= 'A' && c <= 'F')
        return (c - 'A' + 10);
    return (0);
}

int ft_atoi_base(const char str, int str_base)
{
    int i = 0;
    int result = 0;
    int sign = 1;
    while (str[i] <= 32)
        i++;
    if(str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while (ft_isvalid(str[i], str_base))
        result = result str_base + ft_value_of(str[i++]);
    return (result * sign);
}
