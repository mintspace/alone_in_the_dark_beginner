/*
** Assignment name  : ft_print_numbers
** Expected files   : ft_print_numbers.c
** Allowed functions: write
** --------------------------------------------------------------------------------
**
** Write a function that displays all digits in ascending order.
**
** Your function must be declared as follows:
**
** void	ft_print_numbers(void);
*/

#include <unistd.h>

void	ft_print_numbers(void)
{
	char i;

	i = '0';
	while (i <= '9')
	{
		write(1, &i, 1);
		i++;
	}
}
