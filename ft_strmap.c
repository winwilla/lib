#include "libft.h"

/* 
 * Applies the function f to each character of the string given as argument 
 * to create a “fresh” new string (with malloc(3)) resulting from the successive 
 * applications of f.
 */

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *ptr;
	char *start;

	start = NULL;
	if (!s || !f || !(ptr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	start = ptr;
	while (*s)
	{
		*ptr = f(*s);
		ptr++;
		s++;
	}
	*ptr = '\0';
	return (start);
}
