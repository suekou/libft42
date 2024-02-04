#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*arr;
	size_t			total;
	size_t			i;

	if (count != 0 && SIZE_MAX / count < size)
		return (NULL);
	total = count * size;
	arr = (unsigned char *)malloc(total);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < total)
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}

// #include <stdio.h>
// #include <limits.h>
// int	main()
// {
// 	char *tab;
// 	tab = calloc(LONG_MAX + 1, 2);
// 	printf("%s\n", tab);
// 	return (0);
// }