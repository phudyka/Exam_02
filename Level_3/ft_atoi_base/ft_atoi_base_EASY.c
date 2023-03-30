/*The function starts by checking if the first character of the string is a minus sign.
 * If so, the sign is stored and the string is shifted by one character.
 * Then, the function loops over the character string and converts each character to a digit by subtracting '0' from it.
 * If the digit is greater than 9, it means it's an uppercase hexadecimal letter,
 * which is then converted to lowercase before being converted to a digit.
 * If the digit is out of range for the given base, the loop is stopped.
 * At each iteration, the result is multiplied by the base and the digit is added.
 * At the end of the loop, the final result is multiplied by the appropriate sign and returned.
 *Note that this implementation does not handle cases of zero or negative base, which are not allowed in the scope of this exercise.*/

int	ft_atoi_base(const char *str, int str_base)
{
    int sign = 1;
    int result = 0;
    int digit;

    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    while (*str)
    {
        digit = *str - '0';
        if (digit > 9)
            digit = (*str | 32) - 'a' + 10;
        if (digit < 0 || digit >= str_base)
            break;
        result = result * str_base + digit;
        str++;
    }
    return (result * sign);
}
