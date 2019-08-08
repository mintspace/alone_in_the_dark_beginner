/*
** Assignment name  : aff_last_param
** Expected files   : aff_last_param.c
** Allowed functions: write
** --------------------------------------------------------------------------------
**
** Write a program that takes strings as arguments, and displays its last
** argument followed by a newline.
**
** If the number of arguments is less than 1, the program displays a newline.
**
** Examples:
**
** $> ./aff_last_param "zaz" "mange" "des" "chats" | cat -e
** chats$
** $> ./aff_last_param "j'aime le savon" | cat -e
** j'aime le savon$
** $> ./aff_last_param | cat -e
** $
*/

#include <unistd.h>

void aff_last_param(char *s)
{
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
	write(1, "\n", 1);
}

int main(int argc, char **argv)
{
	if (argc >= 2)
		aff_last_param(argv[argc - 1]);
	else
		write(1, "\n", 1);
	return (0);
}
