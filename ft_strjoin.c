#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat;
	char	*start;
	size_t	s1_size;
	size_t	s2_size;

	if (!s1)
		return (NULL);
	if (!s2)
		return (ft_strdup(s1));
	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	concat = (char *)malloc((s1_size + s2_size + 1) * sizeof(char));
	if (!concat)
		return (NULL);
	start = concat;
	while (*s1)
		*concat++ = *s1++;
	while (*s2)
		*concat++ = *s2++;
	*concat = '\0';
	return (start);
}
