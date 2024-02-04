#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (dst);
	if (dst > src)
	{
		while (len)
		{
			*((char *)dst + (len - 1)) = *((char *)src + (len - 1));
			len--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			*((char *)dst + i) = *((char *)src + i);
			i++;
		}
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	char *str1 = NULL;
// 	char *str2 = NULL;
// 	memmove(str1, str2, -1);
// 	printf("%s\n", str1);
// 	return (0);
// }

// #include <stdio.h>
// #include <string.h>

// void print_with_nulls(const char *str, size_t length) {
//     for (size_t i = 0; i < length; i++) {
//         if (str[i] == '\0') {
//             printf("\\0");
//         } else {
//             putchar(str[i]);
//         }
//     }
// }

// int main() {
//     char str1[] = "01234\0 56789";
// 	char str2[] = "01234\0 56789";
// 	char str3[] = "abc";
// 	memmove(str1 + 3, str3, 8);
// 	ft_memmove(str2 + 3, str3, 8);
//     print_with_nulls(str1, sizeof(str1) - 1);
// 	printf("\n");
// 	print_with_nulls(str2, sizeof(str2) - 1);
// 	printf("\n");
//     return 0;
// }

// static int	ft_is_included(char *str1, char *str2, size_t str2_len)
// {
// 	size_t	i;
// 	int	is_included;

// 	is_included = 0;
// 	i = 0;
// 	while (i < str2_len)
// 	{
// 		if (str1 + i == str2)
// 		{
// 			is_included = 1;
// 			break ;
// 		}
// 		i++;
// 	}
// 	return (is_included);
// }

// void	*ft_memmove(void *dst, const void *src, size_t len)
// {
// 	size_t		i;
// 	char		*start;

// 	start = (char *)dst;
// 	i = 0;
	// if (ft_is_included((char *)dst, (char *)src, len))
	// {
		// while (len)
		// {
		// 	*((char *)dst + (len - 1)) = *((char *)src + (len - 1));
		// 	len--;
		// }
	// }
	// else
	// {
	// 	while (i < len)
	// 	{
	// 		*((char *)dst + i) = *((char *)src + i);
	// 		i++;
	// 	}
	// }
	// return (start);
// }