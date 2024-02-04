int	ft_isprint(int c)
{
	return ((c >= ' ' && c <= '~'));
}

// #include <ctype.h>
// #include <stdio.h>
// int	main()
// {
// 	printf("%d\n", isprint('0'));
// 	printf("%d\n", ft_isprint('0'));
// 	return (0);
// }