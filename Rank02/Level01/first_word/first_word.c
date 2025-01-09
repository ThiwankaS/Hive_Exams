#include <unistd.h>

int	ft_putchar(int c)
{
	return (write(1,&c,1));
}

int ft_isspace(int c)
{
	return (c == ' ' || c == '\t');
}

int main (int argc, char *argv[])
{
	char *str = argv[1];
	int count = 0;
	if(argc == 2)
	{
		while(str && str[count] && ft_isspace(str[count]))
			count++;
		while (str && str[count])
		{
			ft_putchar(str[count]);
			if(ft_isspace(str[count + 1]))
				break;
			count++;
		}

	}
	ft_putchar('\n');
	return (0);
}
