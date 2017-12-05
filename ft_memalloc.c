
#include "libft.h"

char	*ft_memalloc(size_t size)
{
	char	*s;

	size_t	i;
	i = 0;
	if ((s = (char*)malloc(sizeof(char) * (size))) == NULL)
		return (NULL);
	while (i < size)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}
