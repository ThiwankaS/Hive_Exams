#include <stdlib.h>
#include <unistd.h>

int ft_putchar(int c)
{
	return (write(1,&c,1));
}

int ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int main(int argc, char *argv[])
{
	(void) argc;
	int count = 0;
	int step = 0;
	char *str = malloc(sizeof(char));
	if(!str)
	{
		free(str);
		return (1);
	}
	while(argv[1] && argv[1][count])
	{
		if(ft_isupper(argv[1][count]))
		{
			str = realloc(str, (step + 2) * sizeof(char));
			if(!str)
			{
				free(str);
				return (1);
			}
			str[step] = '_';
			step++;
			str[step] = argv[1][count] + 32;
			step++;
		}
		else
		{
			str = realloc(str, (step + 1) * sizeof(char));
			if(!str)
			{
				free(str);
				return (1);
			}
			str[step] = argv[1][count];
			step++;
		}
		count++;
	}
	str = realloc(str, (step + 1) * sizeof(char));
	if(!str)
	{
		free(str);
		return (1);
	}
	str[step] = '\0';
	count = 0;
	while(str && str[count])
	{step++;
		ft_putchar(str[count]);
		count++;
	}
	free(str);
	ft_putchar('\n');
	return (0);
}
