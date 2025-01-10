#include <unistd.h>

int ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}

int ft_putchar(int c)
{
	return (write(1,&c,1));
}

int main(int argc, char *argv[])
{
	int count = 0;
	char *str = argv[1];
	if(argc == 2)
	{
		while(str && str[count])
		{
			if(ft_isalpha(str[count]))
			{
				if(ft_islower(str[count]))
					str[count] = 'a' + 'z' - str[count];
				else if(ft_isupper(str[count]))
					str[count] = 'A' + 'Z' - str[count];
			}
			ft_putchar(str[count]);
			count++;
		}
	}
	ft_putchar('\n');
	return (0);
}
