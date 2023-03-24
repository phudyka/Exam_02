int	is_power_of_2(unsigned int n)
{
	int nbr = 1;

	while (nbr <= n)
	{
		if (nbr == 1)
			return (1);
		nbr *= 2;
	}
	return 0;
}
