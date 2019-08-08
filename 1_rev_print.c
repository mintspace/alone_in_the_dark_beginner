/*
** Assignment name  : rev_print
** Expected files   : rev_print.c
** Allowed functions: write
**
** --------------------------------------------------------------------------------
**
** Write a program that takes a string, and displays the string in reverse
** followed by a newline.
**
** If the number of parameters is not 1, the program displays a newline.
**
** Examples:
**
** $> ./rev_print "zaz" | cat -e
** zaz$
** $> ./rev_print "dub0 a POIL" | cat -e
** LIOP a 0bud$
** $> ./rev_print | cat -e
** $
*/

#include <unistd.h>

void	rev_print(char *s)
{
	int counter;

	counter = 0;
	while (*s)
	{
		counter++;
		s++;
	}
	s--;
	while (counter--)
		write(1, s--, 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		rev_print(argv[1]);
	write(1, "\n", 1);
	return (0);
}
