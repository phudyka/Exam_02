#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i, j = 0;

	while (s[i])
	{
		while (reject[j])
		{
			if (s[i] == reject[j])
				return(i);
			j++;
		}
		i++;
	}
	return (i);
}
