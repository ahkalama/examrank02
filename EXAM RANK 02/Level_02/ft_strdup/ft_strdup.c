#include <stdlib.h>
#inclued <unistd.h>

char	*ft_strdup(char *src)
{
	int	i = 0;
	int	len = 0;
	char *tab;

	while (src[len])
		len++;
	tab = malloc(sizeof(*tab) * (len + 1));
	if (tab != NULL)
	{
		while (src[i])
		{
			tab[i] = src[i];
			i++;
		}
		tab[i] = '\0';
	}
	return (tab);
}
