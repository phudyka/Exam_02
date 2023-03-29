#include <unistd.h>

void ft_putnbr(int nbr)
{
   char *str = "0123456789";

   if (nbr >= 10)
      ft_putnbr(nbr / 10);
   write(1, &str[nbr % 10], 1);
}

int main(int argc, char **argv)
{
   (void)argv;
   if (argc == 1)
   {
      int i = 1;

      while (i <= 100)
      {
         if (((i % 3) == 0) && ((i % 5) == 0))
            write(1, "fizzbuzz\n", 9);
         else if ((i % 3) == 0)
            write(1, "fizz\n", 5);
         else if ((i % 5) == 0)
            write(1, "buzz\n", 5); 
         else
         {
            ft_putnbr(i);
            write(1, "\n", 1);
         }
         i++;
      }
   }
   else
      write(1, "\n", 1);
   return 0;
}
