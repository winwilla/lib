#include "libft.h"

/* Outputs the string s to the standard output followed by a ’\n’. */

void	ft_putendl(char const *s)
{
	if (s)
	{
		ft_putstr(s);
		ft_putchar('\n');
	}
}
