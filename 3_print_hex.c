/*
** Assignment name  : print_hex
** Expected files   : print_hex.c
** Allowed functions: write
**
** --------------------------------------------------------------------------------
**
** Write a program that takes a positive (or zero) number expressed in base 10,
** and displays it in base 16 (lowercase letters) followed by a newline.
**
** If the number of parameters is not 1, the program displays a newline.
**
** Examples:
**
** $> ./print_hex "10" | cat -e
** a$
** $> ./print_hex "255" | cat -e
** ff$
** $> ./print_hex "5156454" | cat -e
** 4eae66$
** $> ./print_hex | cat -e
** $
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

void print_hex(int nbr)
{
	char *str;

	str = "0123456789abcdef";
	if (nbr >= 16)
		print_hex(nbr / 16);
	write(1, &str[nbr % 16], 1);
}
