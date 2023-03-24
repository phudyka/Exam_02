int max(int *tab, unsigned int len)
{
	int i = 0;
	int res;
	
	res = tab[i];
	while (i < len)
	{
		if (res < tab[i])
			res = tab[i]
		i++;
	}
	return (res);
}
