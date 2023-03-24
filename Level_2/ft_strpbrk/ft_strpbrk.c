char *ft_strpbrk(const char *s1, const char *s2)
{
	int i,j = 0;

	while (s1[i])
	{
		while (s2[j])
		{
			if (s1[i] == s2[i])
				return((char *)s1);
			j++;
		}
		i++;
	}
	return(0);
}
