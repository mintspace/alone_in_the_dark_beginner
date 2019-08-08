/*
** Assignment name  : rotone
** Expected files   : rotone.c
** Allowed functions: write
**
** --------------------------------------------------------------------------------
**
** Write a program that takes a string and displays it, replacing each of its
** letters by the next one in alphabetical order.
**
** 'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.
**
** The output will be followed by a \n.
**
** If the number of arguments is not 1, the program displays \n.
**
** Example:
**
** $>./rotone "abc"
** bcd
** $>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
** Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
** $>./rotone "AkjhZ zLKIJz , 23y " | cat -e
** BlkiA aMLJKa , 23z $
** $>./rotone | cat -e
** $
** $>
** $>./rotone "" | cat -e
** $
** $>
*/

#include <unistd.h>

char	rotate(char c)
{
	if ((c >= 'a' && c <= 'y') || (c >= 'A' && c <= 'Y'))
		c++;
	else if (c == 'z' || c == 'Z')
		c = 'z' - 25;
	else
		c = c;
	return (c);
}

void	rotone(char *s)
{
	char	rotate_char;

	while (*s)
	{
		rotate_char = rotate(*s);
		write(1, &rotate_char, 1);
		s++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		rotone(argv[1]);
	write(1, "\n", 1);
	return (0);
}
