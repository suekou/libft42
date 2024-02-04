#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == '\0' && c == '\0')
		return ((char *)s);
	else
		return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int	main()
// {
// 	char str[] = "abcdef";
// 	int	c = 'r';
// 	printf("%s\n", strchr(str, c));
// 	printf("%s\n", ft_strchr(str, c));
// 	return (0);
// }