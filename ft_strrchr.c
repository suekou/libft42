#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	while (*s)
	{
		if (*s == (char)c)
			ptr = (char *)s;
		s++;
	}
	if (*s == '\0' && (char)c == '\0')
		return ((char *)s);
	else
		return (ptr);
}

// #include <string.h>
// #include <stdio.h>
// int	main()
// {
// 	char str[] = "ab\0dbcb";
// 	int	c = '\0';
// 	printf("%s\n", strrchr(str, c));
// 	printf("%s\n", ft_strrchr(str, c));
// 	return (0);
// }