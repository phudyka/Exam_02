unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	lcm;

	if (a == 0 || b == 0)
		return 0;
	nbr = a;
	while (lcm % b != 0)
		lcm += a;
	return ((a * b) / lcm);
}
