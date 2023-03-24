#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		int nb1 = atoi(argv[1]);
		int nb2 = atoi(argv[3]);

		if (argv[2][0] == '+')
			printf("%d\n", nb1 + nb2);
		else if (argv[2][0] == '-')
			printf("%d\n", nb1 - nb2);
		else if (argv[2][0] == '*')
			printf("%d\n", nb1 * nb2);
		else if (argv[2][0] == '/')
			printf("%d\n", nb1 / nb2);
		else if (argv[2][0] == '%')
			printf("%d\n", nb1 % nb2);
	}
	else
		printf("\n");
	return 0;
}
