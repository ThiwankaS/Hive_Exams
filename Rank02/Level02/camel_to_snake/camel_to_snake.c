#include <unistd.h>
#include <stdlib.h>

int ft_putchar(int c)
{
	return (write(1,&c,1));
}

int ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int ft_strlen(char *str)
{
	int count = 0;
	while(str && str[count])
		count++;
	return (count);
}

int main(int argc, char *argv[])
{
	int count = 0;
	char *str = argv[1];
	(void) argc;
	int len = ft_strlen(str);
	int countUpper = 0;
	int step = 0;
	while(str && str[count])
	{
		if(ft_isupper(str[count]))
			countUpper++;
		count++;
	}
	char *result = malloc((len + countUpper + 1) * sizeof(char));
	if(!result)
		return (0);
	count = 0;
	while(str && str[count])
	{
		if(ft_isupper(str[count]))
		{
			result[step] = '_';
			step++;
			result[step] = str[count] + 32;
		}
		else
			result[step] = str[count];
		count++;
		step++;
	}
	result[step] = '\0';
	count = 0;
	while(result && result[count])
	{
		ft_putchar(result[count]);
		count++;
	}
	free(result);
	ft_putchar('\n');
	return (0);
}
