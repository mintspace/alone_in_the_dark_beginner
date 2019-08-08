/*
** Assignment name  : print_bits
** Expected files   : print_bits.c
** Allowed functions: write
**
** --------------------------------------------------------------------------------
**
** Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
** AT THE END.
**
** Your function must be declared as follows:
**
** void	print_bits(unsigned char octet);
**
** Example, if you pass 2 to print_bits, it will print "00000010"
*/

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;
	unsigned char div;

	i = 0;
	div = 128;
	while (i < 8)
	{
		if ((octet & div) > 0)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		div >>= 1;
		i++;
	}
}

int main(void)
{
	int i = 42;
	print_bits(i);
	return(0);
}
