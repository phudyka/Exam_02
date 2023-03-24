char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c -= 32;
	return (c);
}

int digit(char c, int base)
{
	int max;

	if (base <= 10)
		max = base + '0';
	else
		max = base - 10 + 'a';
	if (c >= '0' && <= '9' && c <= max)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max)
		return (10 + c - 'a');
	else
		return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int nbr = 0;
	int res = 0;
	int sign = 1;

	if (str[i] == '-')
	{
		sign == -1;
		i++;
	}
	while ((nbr = digit(to_lower(str[i]), str_base)) >= 0)
	{
		res = res * base;
		res = res + (nbr * sign);
		i++;
	}
	return (res);
}
