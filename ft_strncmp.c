#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!s1 && n == 0)
		return (0);
	i = 0;
	while ((*s1 || *s2) && i < n)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	const char *str1 = NULL;
// 	const char *str2 = "hello";
// 	printf("%d\n", strncmp(str1, str2, 0));
// 	printf("%d\n", ft_strncmp(str1, str2, 0));
// 	return (0);
// }
