
#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	lensrc;

	i = 0;
	lensrc = ft_strlen(src);
	while (i < len)
	{
		if (i < lensrc)
			dst[i] = src[i];
		else
			dst[i] = 0;
		i++;
	}
	return (dst);
}
