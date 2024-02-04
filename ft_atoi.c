#include <limits.h>

int	ft_check(const char *str, long num, int sign)
{
	int		count;
	long	num_add;

	num_add = num;
	count = 0;
	if (sign == 1)
	{
		while (count++ < 10)
		{
			if (LONG_MAX - num - (long)(*str - '0') < 0)
				return (1);
			num += num_add;
		}
		return (0);
	}
	else
	{
		while (count++ < 10)
		{
			if (LONG_MIN + num + (long)(*str - '0') > 0)
				return (-1);
			num += num_add;
		}
		return (0);
	}
}

int	ft_atoi(const char *str)
{
	long	num;
	int		sign;
	int		is_flow;

	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	sign = 1;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	num = 0;
	while (*str >= '0' && *str <= '9')
	{
		is_flow = ft_check(str, num, sign);
		if (is_flow == 1)
			return ((int)LONG_MAX);
		else if (is_flow == -1)
			return ((int)LONG_MIN);
		num = num * 10 + (long)(*str - '0');
		str++;
	}
	return ((int)(sign * num));
}

// #include <stdlib.h>
// #include <inttypes.h>
// #include <stdio.h>
// int	main()
// {
// 	char *str = "9223372036854775805";
// 	printf("%d\n", (int)strtol(str,(char **)NULL, 10));
// 	printf("%d\n", atoi(str));
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", (int)LONG_MAX);
// 	printf("%d\n", (int)9223372036854775807L);
// 	return (0);
// }
