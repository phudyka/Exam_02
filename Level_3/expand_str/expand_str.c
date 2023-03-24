#include <unistd.h>

int     is_space(char c)
{
    return (c == ' ' || c == '\t');
}

int main(int argc, char const *argv[])
{
    int i;
    int flag;

    if (argc == 2)
    {
        i = 0;
        while (is_space(argv[1][i]))
            i++;
        while (argv[1][i])
        {
            if (is_space(argv[1][i]))
                flag = 1;
            if (!is_space(argv[1][i]))
            {
                if (flag)
                    write(1, "   ", 3);
                flag = 0;
                write(1, &argv[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
