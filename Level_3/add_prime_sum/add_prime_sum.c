#include <stdlib.h>
#include <stdio.h>

/*
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');

int	ft_atoi(char *str)
{
	int result = 0;
	int sign = 1;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
        	str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}*/

int	isprime(int n)
{
	int i = 3;

	if (n <= 1 || (n % 2 == 0 && n > 2))
		return 0;
	while (i < (n / 2))
	{
		if (n % i == 0)
			return 0;
		i += 2;
	}
	return 1;
}

int main(int argc, char **argv)
{
	int sum = 0;
	int nbr = ft_atoi(argv[1]);

	if (argc == 2)
	{
		while (nbr > 0)
		{
			if (is_prme(nbr--))
				sum += (nbr + 1);
			ft_putnbr(sum);
		}
	}
	if (argc != 2)
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}
