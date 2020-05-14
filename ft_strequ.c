#include "libft.h"

/* 
 * Lexicographical comparison between s1 and s2. If the 2 strings are identical 
 * the function returns 1, or 0 otherwise.
 */

int	ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2 || ft_strcmp(s1, s2))
		return (0);
	return (1);
}
