#include "libft.h"

/* Outputs the string s to the standard output. */

void	ft_putstr(char const *s)
{
	if (s)
	{
		while (*s)
			write(1, s++, 1);
	}
}
