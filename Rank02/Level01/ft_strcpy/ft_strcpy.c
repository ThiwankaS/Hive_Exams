// #include <stdio.h>
// #include <stdlib.h>

// int ft_strlen(char *str)
// {
// 	int count = 0;
// 	while(str && str[count])
// 		count++;
// 	return (count);
// }

char *ft_strcpy(char *s1, char *s2)
{
	int count = 0;
	while(s2 && s2[count])
	{
		s1[count] = s2[count];
		count++;
	}
	return(s1);
}

// int main(int argc, char *argv[])
// {
// 	if(argc == 2)
// 	{
// 		char *src = argv[1];
// 		int len = ft_strlen(src);
// 		char *dest = malloc((len + 1)*sizeof(char));
// 		dest = ft_strcpy(dest,src);
// 		printf("dest : %s\n", dest);
// 		printf("dest len : %d\n", ft_strlen(dest));
// 		printf("src len : %d\n", ft_strlen(src));
// 	}
// 	return (0);
// }
