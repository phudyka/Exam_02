#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int n)
{
    if (n >= 10)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else
        ft_putchar(n + '0');
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int n = 0;
        while (argv[1][n])
        {
            if (argv[1][n] < '0' || argv[1][n] > '9')
            {
                ft_putchar('\n');
                return (0);
            }
            n++;
        }
        int num = atoi(argv[1]);
        int i = 1;
        while (i <= 9)
        {
            ft_putnbr(i);
            ft_putchar(' ');
            ft_putchar('x');
            ft_putchar(' ');
            ft_putnbr(num);
            ft_putchar(' ');
            ft_putchar('=');
            ft_putchar(' ');
            ft_putnbr(i * num);
            ft_putchar('\n');
            i++;
        }
    }
    else
        ft_putchar('\n');
    return (0);
}

