char    *ft_strrev(char *str)
{
	int i = 0;
	int len;
	int tmp;
	while(str[i])
		i++;
	len = i - 1;
	i = 0;
	while(len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return str;
}
