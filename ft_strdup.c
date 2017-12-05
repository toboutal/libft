
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		len;
	int		i;

	len = 0;
	while (s1[len])
		len++;
	s2 = 0;
	if ((s2 = (char*)malloc(sizeof(*s2) * (len + 1))) == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
