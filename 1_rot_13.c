/*
** Assignment name  : rot_13
** Expected files   : rot_13.c
** Allowed functions: write
**
** --------------------------------------------------------------------------------
**
** Write a program that takes a string and displays it, replacing each of its
** letters by the letter 13 spaces ahead in alphabetical order.
**
** 'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.
**
** The output will be followed by a newline.
**
** If the number of arguments is not 1, the program displays a newline.
**
** Example:
**
** $>./rot_13 "abc"
** nop
** $>./rot_13 "My horse is Amazing." | cat -e
** Zl ubefr vf Nznmvat.$
** $>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
** NxwuM mYXVWm , 23l $
** $>./rot_13 | cat -e
** $
** $>
** $>./rot_13 "" | cat -e
** $
** $>
*/

#include <unistd.h>

char rev(char c)
{
	if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
		c += 13;
	else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
		c -= 13;
	else
		c = c;
	return (c);
}

void rot_13(char *s)
{
	char c_rev;

	while (*s)
	{
		c_rev = rev(*s);
		write(1, &c_rev, 1);
		s++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		rot_13(argv[1]);
	write(1, "\n", 1);
	return (0);
}
