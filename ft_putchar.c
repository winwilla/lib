#include "libft.h"

/* Outputs the character c to the standard output. */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
