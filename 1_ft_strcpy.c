/*
** Assignment name  : ft_strcpy
** Expected files   : ft_strcpy.c
** Allowed functions:
**
** --------------------------------------------------------------------------------
**
** Reproduce the behavior of the function strcpy (man strcpy).
**
** Your function must be declared as follows:
**
** char    *ft_strcpy(char *s1, char *s2);
*/

char	*ft_strcpy(char *s1, char *s2)
{
	char *s0;

	s0 = s1;
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (s0);
}
