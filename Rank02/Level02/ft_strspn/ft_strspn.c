#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t count = 0;
	size_t step = 0;
	if(!s || !accept)
		return (count);
	while(s && s[count])
	{
		while(accept && accept[step] && s[count] != accept[step])
			step++;
		if(!accept[step])
			return (count);
		step = 0;
		count++;
	}
	return (count);
}

// int main (int argc, char *argv[])
// {
// 	(void) argc;
// 	printf("org : %ld\n", strspn(argv[1], argv[2]));
// 	printf("cus : %ld\n", ft_strspn(argv[1], argv[2]));
// 	return (0);
// }
