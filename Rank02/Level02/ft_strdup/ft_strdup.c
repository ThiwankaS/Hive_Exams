//#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int count = 0;
	while(str && str[count])
		count++;
	return (count);
}

char *ft_strdup(char *src)
{
	int count = 0;
	int len = ft_strlen(src);
	char *dest = malloc((len + 1) * sizeof(char));
	if(!dest)
		return (NULL);
	while(src && src[count])
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

// int main(int argc, char *argv[])
// {
// 	(void) argc;
// 	printf("%s\n", ft_strdup(argv[1]));
// 	return (0);
// }
