int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

// #include <ctype.h>
// #include <stdio.h>
// int	main()
// {
// 	printf("%d\n", isalpha());
// 	printf("%d\n", ft_isalpha());
// 	return (0);
// }