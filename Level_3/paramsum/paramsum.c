#include <unistd.h>

int main(int argc, char **argv)
{
	int n = (argc - 1);
	char nbr = n + '0';

	(void)argv[0];
	write(1, &nbr, 1);
	write(1, "\n", 1);
	return 0;
}
