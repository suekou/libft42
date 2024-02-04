#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	num;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", ft_strlen("-2147483648"));
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	num = n % 10 + '0';
	write(fd, &num, 1);
}

// int	main()
// {
// 	ft_putnbr_fd(INT_MIN, 1);
// 	return (0);
// }