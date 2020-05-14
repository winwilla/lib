#include "libft.h"

/* 
 * Checks whether c is a char value 
 * that fits into the ASCII character set 
 */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
