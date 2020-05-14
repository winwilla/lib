#include "libft.h"

/* Checks for any printable character */

int		ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
