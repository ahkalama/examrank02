#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int i = 0;
	int len;
	char *tab;

	len = ft_strlen(str);
	tab = (char *)malloc(sizeof(char) * len + 1);
	if(tab == NULL)
	return(NULL);
	while(str[i])
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return(tab);
}