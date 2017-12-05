
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n >= 10 || n <= -10)
		ft_putnbr_fd((n / 10), fd);
	else if (n < 0)
		ft_putchar_fd('-', fd);
	ft_putchar_fd((n % 10 * ((n < 0) ? -1 : 1) + '0'), fd);
}
