#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len)
	{
		*ptr = (unsigned char)c;
		ptr++;
		len--;
	}
	return (b);
}

// #include <string.h>
// #include <stdio.h>
// int	main()
// {
// 	char	*str1 = NULL;
// 	int		c = '0';
// 	size_t	len = 1;
// 	char	*str2 = NULL;
// 	ft_memset(str1, c, len);
// 	memset(str2, c, len);
// 	printf("%s\n", str1);
// 	printf("%s\n", str2);
// 	return (0);
// }