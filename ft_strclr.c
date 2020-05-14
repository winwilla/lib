#include "libft.h"

/* Sets every character of the string to the value '\0' */

void	ft_strclr(char *s)
{
	if (s)
	{
		ft_memset(s, '\0', ft_strlen(s));
	}
}
