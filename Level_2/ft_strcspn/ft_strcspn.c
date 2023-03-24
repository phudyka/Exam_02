#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i, j = 0;

	while (s[i])
	{
		while (reject[j])
		{
			if (s1[i] == reject[j])
				return(i);
			j++;
		}
		i++;
	}
	return (i);
}
