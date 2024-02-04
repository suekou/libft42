int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}

// #include <ctype.h>
// #include <stdio.h>
// int	main()
// {
// 	int	c = 'A';
// 	int d = 'A';
// 	c = toupper(c);
// 	d = ft_toupper(d);
// 	printf("%c\n", c);
// 	printf("%c\n", d);
// 	return (0);
// }