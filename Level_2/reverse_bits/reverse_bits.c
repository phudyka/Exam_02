/*The function uses a while loop to reverse byte bits. 
 * At each iteration, it shifts the reversed byte to the left with the operator <<=. 
 * Next, it uses the OR binary operator (|) to add the low-weight bit of the original byte 
 * to the reversed byte using the binary AND operator (&). 
 * Finally, it shifts the original byte byte to the right with the >>= operator 
 * to process the next bit in the next iteration. 
 * The loop ends when all 8 bits have been inverted.
 * Finally, the function returns the reverse byte reversed.*/

unsigned char reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char rev = 0;
	while (i--)
	{
		rev <<= 1;
		rev |= (octet & 1);
		octet >>= 1;
	}
	return (rev);	
}
