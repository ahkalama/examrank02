int	ft_atoi(char *str)
{
	int sign = 1;
	int result = 0;

	while(*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if(*str == '-')
		sign = -1;
	if(*str == '-' || *str == '+')
		str++;
	while(*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}
// #include <stdio.h>
// int	main()
// {
// 	printf("%d", ft_atoi("-1234"));
// }