
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		ndl;
	size_t		i;

	ndl = ft_strlen(needle);
	if (ndl == 0)
		return (char *)(haystack);
	while (len != 0 && *haystack)
	{
		i = 0;
		while (i < len && i < ndl && *(haystack + i) == *(needle + i))
			i++;
		if (i == ndl)
			return (char *)(haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
