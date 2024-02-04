#include "libft.h"

static void	ft_allocate(size_t dst_size, char *dst, const char *src, int start)
{
	size_t	i;

	i = 0;
	while (i < dst_size && src[start + i])
	{
		dst[i] = src[start + i];
		i++;
	}
	dst[i] = '\0';
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	size_t			substring_size;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
	{
		substring = (char *)malloc(1 * sizeof(char));
		if (!substring)
			return (NULL);
		substring[0] = '\0';
		return (substring);
	}
	substring_size = ft_strlen(s + start);
	if (substring_size > len)
		substring_size = len;
	substring = (char *)malloc((substring_size + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	ft_allocate(substring_size, substring, s, (int)start);
	return (substring);
}

// #include <stdio.h>
// int	main()
// {
// 	char arr[] = "abc";
// 	printf("%lu\n", sizeof(arr));
// 	printf("%p", "Hello");
// 	return (0);
// }