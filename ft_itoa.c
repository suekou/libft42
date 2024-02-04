#include <stdlib.h>

static int	ft_get_digits(long n)
{
	int	digits;

	if (n == 0)
		return (1);
	digits = 0;
	while (n)
	{
		digits++;
		n /= 10;
	}
	return (digits);
}

static int	ft_pow_of_ten(int exponent)
{
	long	divisor;

	divisor = 1;
	while (exponent > 1)
	{
		divisor *= 10;
		exponent--;
	}
	return (divisor);
}

static void	ft_insert_value(char *converted_nb, long long_nb, int digits)
{
	long	divisor;
	int		i;

	i = 0;
	if (long_nb < 0)
	{
		converted_nb[i++] = '-';
		long_nb = -long_nb;
	}
	while (digits)
	{
		divisor = ft_pow_of_ten(digits);
		if (long_nb / divisor == 0)
			converted_nb[i] = '0';
		else
			converted_nb[i] = (long_nb / divisor) + '0';
		long_nb %= divisor;
		digits--;
		i++;
	}
	converted_nb[i] = '\0';
}

char	*ft_itoa(int nb)
{
	long	long_nb;
	int		digits;
	char	*converted_nb;

	long_nb = nb;
	digits = ft_get_digits(long_nb);
	converted_nb = (char *)malloc(sizeof(char) * ((long_nb < 0) + digits + 1));
	if (!converted_nb)
		return (NULL);
	ft_insert_value(converted_nb, long_nb, digits);
	return (converted_nb);
}

// #include <stdio.h>
// #include <limits.h>
// int	main(void)
// {
// 	printf("%s\n", ft_itoa(INT_MIN));
// 	return (0);
// }