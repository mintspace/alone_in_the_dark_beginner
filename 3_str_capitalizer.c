/*
** Assignment name  : str_capitalizer
** Expected files   : str_capitalizer.c
** Allowed functions: write
**
** --------------------------------------------------------------------------------
**
** Write a program that takes one or several strings and, for each argument,
** capitalizes the first character of each word (If it's a letter, obviously),
** puts the rest in lowercase, and displays the result on the standard output,
** followed by a \n.
**
** A "word" is defined as a part of a string delimited either by spaces/tabs, or
** by the start/end of the string. If a word only has one letter, it must be
** capitalized.
**
** If there are no arguments, the progam must display \n.
**
** Example:
**
** $> ./str_capitalizer | cat -e
** $
** $> ./str_capitalizer "Premier PETIT TesT" | cat -e
** Premier Petit Test$
** $> ./str_capitalizer "DeuxiEmE tEST uN PEU moinS  facile" "   attention C'EST pas dur QUAND mEmE" "ALLer UN DeRNier 0123456789pour LA rouTE    E " | cat -e
** Deuxieme Test Un Peu Moins  Facile$
**    Attention C'est Pas Dur Quand Meme$
** Aller Un Dernier 0123456789pour La Route    E $
** $>
*/

#include <unistd.h>

void low_high(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = (str[i] + 32);
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (str[i] - 32);
		i++;
		while (str[i] >= 'a' && str[i] <= 'z')
			i++;
	}
}

void str_capitalizer(char *str)
{
	int i;

	i = 0;
	low_high(str);

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc >= 2)
		while (argv[i] != '\0')
		{
            if (argc > 2)
                write(1, "\n", 1);
			str_capitalizer(argv[i]);
			i++;
		}
	write(1, "\n", 1);
	return (0);
}
