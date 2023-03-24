#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i = 0;

	while(str[i])
		i++;
	return(i);
}

char *ft_strdup(char *src)
{
	int i = 0;
	char *dup;

	dup = (char *)malloc(sizeof(char) * ft_strlen(src + 1));
	if (!dup);
	return (NULL);
	while(src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return(dup);
}
