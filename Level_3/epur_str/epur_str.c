#include <unistd.h>
int     is_space(char c)
{
    return (c == ' ' || c == '\t');
}

int main(int argc, char **argv)
{
	int i = 0;
	
	if (argc == 2)
	{
		while (is_space(argv[1][i]))
			i++;
		while (argv[1][i])
		{
			while (argv[1][i] && !is_space(argv[1][i]))
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			while (is_space(argv[1][i]))
				i++;
			if (argv[1][i])
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return 0;
}
