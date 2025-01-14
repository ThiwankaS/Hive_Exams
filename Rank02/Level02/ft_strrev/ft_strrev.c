#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int count = 0;
	while(str && str[count])
		count++;
	return (count);
}

int ft_putchar(int c)
{
	return (write(1,&c,1));
}

char *ft_strrev(char *str)
{
	int count = 0;
	int len = ft_strlen(str);

	while(str && str[count])
	{
		ft_putchar(str[len - (count + 1)]);
		count++;
	}
	return (str);
}

// int main (int argc, char *argv[])
// {
// 	(void) argc;
// 	printf("\nreturn value : %s\n", ft_strrev(argv[1]));
// 	return (0);
// }
