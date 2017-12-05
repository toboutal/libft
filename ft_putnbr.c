
#include "libft.h"

void	ft_putnbr(int n)
{
	if (n >= 10 || n <= -10)
		ft_putnbr(n / 10);
	else if (n < 0)
		ft_putchar('-');
	ft_putchar(n % 10 * ((n < 0) ? -1 : 1) + '0');
}
