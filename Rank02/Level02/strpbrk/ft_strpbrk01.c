#include <stdlib.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	const char *start = s2;
	if(!s1 || !s2)
		return (NULL);
	while(s1 && *s1)
	{
		while(s2 && *s2)
		{
			if(*s1 == *s2)
				return ((char *)s1);
			s2++;
		}
		s2 = start;
		s1++;
	}
	return (NULL);
}
