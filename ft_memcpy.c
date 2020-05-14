#include "libft.h"

/* Copies n bytes from memory area src to memory area dest. */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*p;
	char	*s;
	size_t	i;

	p = (char *)dst;
	s = (char *)src;
	i = 0;
	while (i < n)
	{
		p[i] = s[i];
		i++;
	}
	return (dst);
}
