/*
** Assignment name  : ft_strrev
** Expected files   : ft_strrev.c
** Allowed functions:
**
** --------------------------------------------------------------------------------
**
** Write a function that reverses (in-place) a string.
**
** It must return its parameter.
**
** Your function must be declared as follows:
**
** char    *ft_strrev(char *str);
*/

#include <stdlib.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	*s;

	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	s = (char*)malloc(sizeof(str) + (i + 1));
	i--;
	while (i >= 0)
	{
		s[j] = str[i];
		i--;
		j++;
	}
	s[j] = '\0';
	return (s);
}
