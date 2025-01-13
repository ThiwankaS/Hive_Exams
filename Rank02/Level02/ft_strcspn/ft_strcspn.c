// #include <string.h>
// #include <stdio.h>
#include <stddef.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	size_t count = 0;
	size_t step = 0;
	while(s && s[count])
	{
		while(reject[step] && s[count] != reject[step])
			step++;
		if(reject[step])
			return (count);
		step = 0;
		count++;
	}
	return (count);
}

// int main(int argc, char *argv[])
// {
// 	(void) argc;
// 	printf("%ld\n", strcspn(argv[1], argv[2]));
// 	printf("%ld\n", ft_strcspn(argv[1], argv[2]));
// 	return (0);
// }
