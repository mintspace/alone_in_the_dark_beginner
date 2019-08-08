/*
** Assignment name  : ft_atoi
** Expected files   : ft_atoi.c
** Allowed functions: None
**
** --------------------------------------------------------------------------------
**
** Write a function that converts the string argument str to an integer (type int)
** and returns it.
**
** It works much like the standard atoi(const char *str) function, see the man.
**
** Your function must be declared as follows:
**
** int	ft_atoi(const char *str);
*/

int		ft_atoi(const char *str)
{
	int	nbr;
	int	sign;

	sign = 1;
	nbr = 0;
	if (!*str)
		return (0);
	while (*str >= 0 && *str <= 32 && (*str))
		str++;
	if (*str == '+' || *str == '-')
		if (*str == '-')
		{
			sign = -1;
			str++;
		}
	while (*str >= '0' && *str <= '9')
	{
		nbr = (nbr * 10) + (*str - 48);
		str++;
	}
	return (sign * nbr);
}
