#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        int j = 0;

        while (argv[1][i])
        {
			j = 0;
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                while (j < argv[1][i] - 'a' + 1)
				{
                    write(1, &argv[1][i], 1);
					j++;
				}
            }
            else if ( argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                while (j < argv[1][i] - 'A' + 1)
				{
                    write(1, &argv[1][i], 1);
					j++;
				}
            }
            else
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}	
