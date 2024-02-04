#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	if (!haystack && len == 0)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	while (*haystack && len >= needle_len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	const char *haystack = "abc";
// 	const char *needle = "";
// 	printf("%s\n", ft_strnstr(haystack, needle, 0));
// 	return (0);
// }

// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	int	i;

// 	if (*needle == '\0')
// 		return ((char *)haystack);
// 	while (*haystack && len > 0)
// 	{
// 		i = 0;
// 		while (*(haystack + i) == *(needle + i) && len - i > 0)
// 		{
// 			i++;
// 			if (*(needle + i) == '\0')
// 				return ((char *)haystack);
// 		}
// 		haystack++;
// 		len--;
// 	}
// 	return (NULL);
// }

// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	const char *haystack = "Hello World";
// 	const char *needle = "World";
// 	char *result1 = strnstr(haystack, needle, 11); 
// 	char *result2 = ft_strnstr(haystack, needle, 11); 
// 	printf("%s\n", result1);
// 	printf("%s\n", result2);
// 	return (0);
// }