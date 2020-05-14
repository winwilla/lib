#include "libft.h"

/* 
 * Applies the function f to each character of the string passed as argument by 
 * giving its index as first argument to create a “fresh” new string (with 
 * malloc(3)) resulting from the successive applications of f.
 */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	i;

	if (!s || !f || !(ptr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
