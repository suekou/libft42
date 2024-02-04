#include "libft.h"

static void	ft_initialize_and_set(char *ascii, char const *set)
{
	int	i;

	i = 0;
	while (i < 256)
		ascii[i++] = 0;
	while (*set)
	{
		ascii[(int)*set] = 1;
		set++;
	}
}

static void	ft_assign(char const *s1, char *s2, size_t *s_idx, size_t *e_idx)
{
	while (s1[*s_idx] && s2[(int)s1[*s_idx]])
		(*s_idx)++;
	while (*e_idx > *s_idx && s2[(int)s1[*e_idx]])
		(*e_idx)--;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	ascii[256];
	char	*trimmed_s1;
	char	*start;
	size_t	start_idx;
	size_t	end_idx;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	if (!*s1)
		return (ft_strdup(""));
	ft_initialize_and_set(ascii, set);
	start_idx = 0;
	end_idx = ft_strlen(s1) - 1;
	ft_assign(s1, ascii, &start_idx, &end_idx);
	trimmed_s1 = (char *)malloc((end_idx - start_idx + 2) * sizeof(char));
	if (!trimmed_s1)
		return (NULL);
	start = trimmed_s1;
	while (start_idx <= end_idx)
		*trimmed_s1++ = s1[start_idx++];
	*trimmed_s1 = '\0';
	return (start);
}
