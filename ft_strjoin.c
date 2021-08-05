#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	int		b;
	int		c;

	if (!s1 || !s2)
		return (NULL);
	a = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	b = -1;
	c = -1;
	if (a == NULL)
		return (NULL);
	while (*(s1 + ++b))
		*(a + b) = *(s1 + b);
	while (*(s2 + ++c))
		*(a + b++) = *(s2 + c);
	*(a + b) = '\0';
	return (a);
}
