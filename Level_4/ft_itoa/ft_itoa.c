#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

char *ft_itoa(int nbr)
{
    int temp, len;
    char *str;

    temp = nbr;
	 if (temp <= 0)
		 len = 1;
	 else
		 len = 0;
    while (temp != 0)
    {
        len++;
        temp /= 10;
    }
    if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    str[len] = '\0';
    if (nbr < 0)
        str[0] = '-';
    else if (nbr == 0)
        str[0] = '0';
    while (nbr != 0)
    {
        len--;
        str[len] = abs(nbr % 10) + '0';
        nbr /= 10;
    }
    return (str);
}

