void sort_int_tab(int *tab, unsigned int size)
{
	int	i = 0, 
	int	j = 0;
	int	temp = 0;

	while (i < size) 
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
