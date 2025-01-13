#include <stdlib.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int count = 0;
	int step = 0;

	if(!s1 || !s2)
		return (NULL);
	while(s1 && s1[count])
	{
		while(s2 && s2[step])
		{
			if(s1[count] == s2[step])
				return ((char *)&s1[count]);
			step++;
		}
		step = 0;
		count++;
	}
	return (NULL);
}
