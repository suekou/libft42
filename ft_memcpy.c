#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src && n != 0)
		return (dst);
	i = 0;
	while (i < n)
	{
		*((unsigned char *)dst + i) = *((const unsigned char *)src + i);
		i++;
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>
// void print_string_with_nulls(const char *str, size_t len) {
//     for (size_t i = 0; i < len; i++) {
//         if (str[i] == '\0') {
//             printf("\\0");
//         } else {
//             printf("%c", str[i]);
//         }
//     }
//     printf("\n");
// }
// int main() {
//     char *str1 = NULL;
//     char *str2 = NULL;
// 	// ft_memcpy(str1, str2, 6);
// 	ft_memcpy(str1, str2, 1);
// 	printf("%s\n", str1);
//     // print_string_with_nulls(str1, sizeof(str1) - 1);
//     return 0;
// }