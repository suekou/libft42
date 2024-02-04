#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <ctype.h>
// #include <stdio.h>
// int	main()
// {
// 	printf("%d\n", isalnum('A'));
// 	printf("%d\n", ft_isalnum('A'));
// 	return (0);
// }