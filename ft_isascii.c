int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// #include <ctype.h>
// #include <stdio.h>
// int	main()
// {
// 	printf("%d\n", isascii(128));
// 	printf("%d\n", ft_isascii(128));
// 	return (0);
// }