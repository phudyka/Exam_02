#include <unistd.h>

int check(int c, char *str, int index)
{
	int i = 0;

	while (i < index)
	{
		if (str[i] == c)
			return 0;
		i++;
	}
	return 1;
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i, j, k = 0;
	
		while (argv[1][i])
			i++;
		while(argv[2][j])
		{
			argv[1][i] == argv[2][j];
			i++;
			j++;
		}
		i--;
		while (k <= i)
		{
			if (check(argv[1][k], argv[1], k) == 1)
				write(1, &argv[1][k], 1);
			k++;
		}

	}
	write(1, "\n", 1);
	return 0;
}
