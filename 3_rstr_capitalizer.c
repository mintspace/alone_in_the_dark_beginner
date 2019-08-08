/*
** Assignment name  : rstr_capitalizer
** Expected files   : rstr_capitalizer.c
** Allowed functions: write
**
** --------------------------------------------------------------------------------
**
** Write a program that takes one or more strings and, for each argument, puts
** the last character of each word (if it's a letter) in uppercase and the rest
** in lowercase, then displays the result followed by a \n.
**
** A word is a section of string delimited by spaces/tabs or the start/end of the
** string. If a word has a single letter, it must be capitalized.
**
** If there are no parameters, display \n.
**
** Examples:
**
** $> ./rstr_capitalizer | cat -e
** $
** $> ./rstr_capitalizer "Premier PETIT TesT" | cat -e
** premieR petiT tesT$
** $> ./rstr_capitalizer "DeuxiEmE tEST uN PEU moinS  facile" "   attention C'EST pas dur QUAND mEmE" "ALLer UN DeRNier 0123456789pour LA rouTE    E " | cat -e
** deuxiemE tesT uN peU moinS  facilE$
**    attentioN c'esT paS duR quanD memE$
** alleR uN dernieR 0123456789pouR lA routE    E $
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
	i--;
	while (i > 0)
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i--;
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (str[i] - 32);
		i--;
		while (str[i] >= 'a' && str[i] <= 'z')
			i--;
	}
	i--;
}

void rstr_capitalizer(char *str)
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
			rstr_capitalizer(argv[i]);
			i++;
		}
	else
		write(1, "\n", 1);
	return (0);
}
