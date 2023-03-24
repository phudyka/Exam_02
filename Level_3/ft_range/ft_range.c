#include <stdlib.h>

int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

int	*ft_range(int start, int end)
{ 
	int i = 0;
	int *tab;
	int size = ft_abs(end - start) + 1;

	if (!(tab = (int *)malloc(sizeof(int) * size)))
      return (NULL);
   if (start <= end)
   {
      while (++i < size)
         tab[i] = start + i;
   }
   else
   {
      while (++i < size)
         tab[i] = end + i;
   }
   return (tab);
}
