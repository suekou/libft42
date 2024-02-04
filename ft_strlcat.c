#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	if (!dst && src && dstsize == 0)
		return (ft_strlen(src));
	dst_len = ft_strlen((const char *)dst);
	src_len = ft_strlen(src);
	if (dst_len >= dstsize)
		return (src_len + dstsize);
	while (*dst)
		dst++;
	i = 0;
	while (*src && (dst_len + i < dstsize - 1))
	{
		*dst++ = *src++;
		i++;
	}
	*dst = '\0';
	return (dst_len + src_len);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	const char *src = "!";
// 	char dst[] = "HelloWorld";
// 	ft_strlcat(dst, src, 100);
// 	printf("%s\n", dst);
// 	return (0);
// }