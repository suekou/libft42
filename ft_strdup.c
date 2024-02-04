#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	s1_size;
	size_t	i;

	s1_size = ft_strlen(s1);
	dest = (char *)malloc((s1_size + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (i <= s1_size)
	{
		dest[i] = s1[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// int	main()
// {
// 	printf("%s\n", ft_strdup(NULL));
// 	return (0);
// }