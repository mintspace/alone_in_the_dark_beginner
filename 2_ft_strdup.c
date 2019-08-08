/*
** Assignment name  : ft_strdup
** Expected files   : ft_strdup.c
** Allowed functions: malloc
**
** --------------------------------------------------------------------------------
**
** Reproduce the behavior of the function strdup (man strdup).
**
** Your function must be declared as follows:
**
** char    *ft_strdup(char *src);
*/

#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	while (src[i] != '\0')
		i++;
	str = (char*)malloc(sizeof(*src) + (i + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
