#include <unistd.h>

int ft_isspace(int c)
{
	return (c == ' ' || c == '\t');
}

int ft_putchar(int c)
{
	return (write(1,&c,1));
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
	int spaces = 1;
	int len = ft_strlen(argv[1]);
	char *str = argv[1];
	if(argc == 2)
	{
		while(str && str[len - 1] && ft_isspace(str[len - 1]))
			len--;
		while(str && str[count] && ft_isspace(str[count]))
			count++;
		while(str && str[count] && count < len)
		{
			if(!ft_isspace(str[count]))
			{
				ft_putchar(str[count]);
				spaces = 1;
			}
			else if(ft_isspace(str[count]))
			{
				while(spaces <= 3)
				{
					ft_putchar(' ');
					spaces++;
				}
			}
			count++;
		}
	}
	ft_putchar('\n');
	return (0);
}
