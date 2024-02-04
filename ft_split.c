#include "libft.h"

static size_t	ft_count_word(char const *s, char c)
{
	size_t	word_count;

	if (!s)
		return (SIZE_MAX);
	word_count = 0;
	while (*s)
	{
		while (*s && *s == c && word_count != SIZE_MAX)
			s++;
		if (*s && *s != c && word_count != SIZE_MAX)
			word_count++;
		while (*s && *s != c && word_count != SIZE_MAX)
			s++;
	}
	return (word_count);
}

static size_t	ft_measure_len(char const *s, char c)
{
	size_t	word_len;

	word_len = 0;
	while (*s && *s != c && word_len != SIZE_MAX)
	{
		word_len++;
		s++;
	}
	return (word_len);
}

static char	*ft_my_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

static void	ft_free_tab(char **tab, char **start)
{
	while (start < tab)
		free(*start++);
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	**start;

	tab = (char **)malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!tab || ft_count_word(s, c) == SIZE_MAX)
		return (NULL);
	start = tab;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			*tab = (char *)malloc((ft_measure_len(s, c) + 1) * sizeof(char));
			if (!*tab || ft_measure_len(s, c) == SIZE_MAX)
			{
				ft_free_tab(tab, start);
				return (NULL);
			}
			ft_my_strncpy(*tab++, s, ft_measure_len(s, c));
			s += ft_measure_len(s, c);
		}
	}
	*tab = NULL;
	return (start);
}

// #include <stdio.h>
// int	main()
// {
// 	char *str = "";
// 	char c = ' ';
// 	char **tab;
// 	tab = ft_split(str, c);
// 	printf("%s\n", tab[0]);
// 	return (0);
// }