#include <unistd.h>

int main(int argc, char **argv)
{

	int i, j = 0;

	if (argc == 3)
	{
		while (argv[2][j])
			if (argv[2][j++] == argv[1][i])
				i++;
		if (!argv[1][i])
		{
			i = 0;
			while (argv[1][i])
				write(1, &argv[1][i++], 1);
		}
	write(1, "\n", 1);
	return 0;
	}
}
