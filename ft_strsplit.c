#include "libft.h"

/* 
 * Allocates (with malloc(3)) and returns an array of “fresh” strings (all 
 * ending with ’\0’, including the array itself) obtained by spliting s using 
 * the character c as a delimiter. 
 * Example: ft_strsplit("*hello*fellow***students*", ’*’) returns the array 
 * ["hello", "fellow", "students"]. 
 */

static void		ft_free_arr(char **arr, size_t j)
{
	size_t i;

	i = 0;
	while (i < j)
	{
		free(arr[i]);
		arr[i] = NULL;
		i++;
	}
	free(arr);
	arr = NULL;
}

static size_t	ft_count_words(char const *s, char c)
{
	size_t i;
	size_t n;

	i = 0;
	n = 0;
	if (!s || !*s)
		return (n);
	while (s[i] && s[i + 1])
	{
		if (s[i] != c && s[i + 1] == c)
			n++;
		i++;
	}
	if (s[i] != c)
		n++;
	return (n);
}

static void		ft_strcpyij(char *dst, char const *s, size_t start, size_t end)
{
	while (start < end)
		*dst++ = s[start++];
	*dst = '\0';
}

static char		**ft_strcpy_arr(char **arr, char const *s, char c, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = 0;
	while (j < n)
	{
		while (s[i] == c)
			i++;
		if ((s[i] != c && !s[i - 1]) || (s[i] != c && s[i - 1] == c))
		{
			len = i;
			while (s[i] && s[i] != c)
				i++;
			if (!(arr[j] = (char *)malloc(sizeof(char) * (i - len + 1))))
			{
				ft_free_arr(arr, j);
				return (NULL);
			}
			ft_strcpyij(arr[j++], s, len, i);
		}
	}
	return(arr);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**arr;
	size_t	n;

	if (!s)
		return (NULL);
	n = ft_count_words(s, c);
	if (!(arr = (char **)malloc(sizeof(char *) * (n + 1))))
		return (NULL);
	arr[n] = NULL;
	arr = ft_strcpy_arr(arr, s, c, n);
	return (arr);
}
