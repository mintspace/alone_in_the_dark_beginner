/*
** Assignment name  : repeat_alpha
** Expected files   : repeat_alpha.c
** Allowed functions: write
**
** --------------------------------------------------------------------------------
**
** Write a program called repeat_alpha that takes a string and display it
** repeating each alphabetical character as many times as its alphabetical index,
** followed by a newline.
**
** 'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...
**
** Case remains unchanged.
**
** If the number of arguments is not 1, just display a newline.
**
** Examples:
**
** $>./repeat_alpha "abc"
** abbccc
** $>./repeat_alpha "Alex." | cat -e
** Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
** $>./repeat_alpha 'abacadaba 42!' | cat -e
** abbacccaddddabba 42!$
** $>./repeat_alpha | cat -e
** $
** $>
** $>./repeat_alpha "" | cat -e
** $
** $>
*/

#include <unistd.h>

int repeat_number(char c)
{
	int i;

	i = 1;
	if (c >= 'a' && c <= 'z')
		i =  (c - 97) + 1;
	if (c >= 'A' && c <= 'Z')
		i = (c - 65) + 1;
	return (i);
}

void repeat_alpha(char *str)
{
	int repeat_num;

	while(*str)
	{
		repeat_num = repeat_number(*str);
		while(repeat_num--)
			write(1, str, 1);
		str++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}
