#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        int i = 1;
        while (i < argc)
        {
            int j = 0;
            while (argv[i][j])
            {
                if ((argv[i][j] >= 'a' && argv[i][j] <= 'z') || (argv[i][j] >= 'A' && argv[i][j] <= 'Z'))
                {
                    if (!((argv[i][j + 1] >= 'a' && argv[i][j + 1] <= 'z') || (argv[i][j + 1] >= 'A' && argv[i][j + 1] <= 'Z')) || argv[i][j + 1])
                    {
                        if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
                            argv[i][j] -= 32;
                    }
                    else
                    {
                        if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
                            argv[i][j] += 32;
                    }
                }
                j++;
            }
            write(1, argv[i], j);
            write(1, " ", 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
