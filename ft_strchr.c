
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	if (!s && c != 0)
		return (NULL);
	while (str[i] != c && str[i])
		i++;
	if (str[i] != c)
		return (NULL);
	return (str + i);
}
