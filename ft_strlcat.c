
#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		len;

	i = 0;
	if (size <= ft_strlen(dst))
		return (ft_strlen(src) + size);
	while (dst[i] && i < size)
		i++;
	len = i;
	while (src[i - len] && i < size - 1)
	{
		dst[i] = src[i - len];
		i++;
	}
	if (len < size)
		dst[i] = '\0';
	return (len + ft_strlen(src));
}
