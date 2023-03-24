/*The "swap_bits" function takes an input byte (unsigned char) 
 * and returns a byte whose 4 bits of low weight and 4 bits 
 * of high weight have been exchanged.
 * The way it works is by using bit shift operators. 
 * The input byte is first shifted 4 bits to the right using the right shift operator (>>)
 * to move the 4 high-weight bits to the 4 low-weight bits.
 * Then, the byte is shifted 4 bits to the left using the left offset operator (<)
 * to move the 4 bits of low weight to the 4 bits of high weight.
 * Finally, the offset bits are combined using the binary OR operator (|)
 * to create the output byte with the exchanged bits.
 * Thus, if we give an input byte with the binary value "abcdefgh",
 * the output will be the byte with the exchanged bits, that is "efghabcd".*/

unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}
