#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int num, i, factor;
		
		i = 2;
		num = atoi(argv[1]);
		while (num > 1)
		{
			if (num % i == 0)
			{
				factor = i;
				printf("%d", factor);
				num /= i;
				if (num != 1)
					printf("*");
			}
			else
				i++;
		}
		printf("\n");
		return 0;
}

