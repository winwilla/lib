#include "libft.h"

/* 
 * Checks for white-space characters: space, form-feed ('\f'), newline ('\n'), 
 * carriage return ('\r'), horizontal tab ('\t'), and vertical tab ('\v')
 */

int	ft_isspace(int c)
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ');
}
