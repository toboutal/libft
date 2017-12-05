
#include "libft.h"

static int	getnextc(char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

char		*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str)
	{
		if (*str == c)
			if (!(getnextc(str + 1, c)))
				return (str);
		str++;
	}
	if (!c)
		return (str);
	return (NULL);
}
