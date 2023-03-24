#include <unistd.h>
#include <limits.h>

int	ft_atoi(const char *str)
{
	int	i = 0;
	int	nbr = 0;
	int	sign = 1;

	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i])
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	nbr *= sign;
	if (nbr > INT_MAX || nbr < INT_MIN)
		return(0);
	return (nbr);
}
