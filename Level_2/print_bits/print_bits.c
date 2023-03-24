#include <unistd.h>

/*The function uses a while loop to iterate over the 8 bits of the octet, from right to left. 
 * For each bit, it uses a mask that has only one bit set to 1 and the others set to 0, 
 * by shifting the bit left with the << operator, to select the corresponding bit in the octet. 
 * If this bit is equal to 1, the function prints "1" to the standard output using the write function. 
 * Otherwise, it prints "0". 
 * The loop ends when all 8 bits have been processed.*/
void	print_bits(unsigned char octet)
{
	int i = 8;

	unsigned char bit;
	while(i--)
	{
		bit = (1 << i);
		if ((octet & bit) == bit)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
}
