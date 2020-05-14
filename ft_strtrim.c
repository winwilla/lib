#include "libft.h"

/* 
 * Allocates (with malloc(3)) and returns a copy of the string given as argument 
 * without whitespaces at the beginning or at the end of the string. Will be 
 * considered as whitespaces the following characters ’ ’, ’\n’ and ’\t’. 
 * If s has no whitespaces at the beginning or at the end, the function returns a 
 * copy of s. 
 */

char		*ft_strtrim(char const *s)
{
	char		*ptr;
	char		*start;
	char		*end;
	size_t		i;

	if (!s)
		return (NULL);
	start = (char *)s;
	end = (char *)(s + ft_strlen(s));
	while (*start && ft_isspace(*start))
		start++;
	while (start != end && ft_isspace(*--end))
		;
	if (!(ptr = ft_strnew(end - start + 1)))
		return (NULL);
	i = 0;
	while (start <= end)
		ptr[i++] = *start++;
	return (ptr);
}
