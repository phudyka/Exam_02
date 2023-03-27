#include <unistd.h>

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_atoi(char *str)
{
	int sign;
	int res;
	int i;

	sign = 1;
	res = 0;
	i = 0;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);
}

void ft_print_hex(int nb)
{
	char *hex = "0123456789abcdef";
	if (nb >= 16)
	{
		ft_print_hex(nb / 16);
		ft_print_hex(nb % 16);
	}
	else
		ft_putchar(hex[nb]);
}


int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int nb = ft_atoi(argv[1]);
        ft_print_hex(nb);
    }
    ft_putchar('\n');
    return (0);
}
