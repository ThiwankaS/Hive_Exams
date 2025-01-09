#include <unistd.h>

int ft_putchar(int c)
{
	return (write(1,&c,1));
}

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

int main(int argc, char *argv[])
{
	int count = 0;
	int repeat = 0;
	char *str = argv[1];
	if(argc == 2)
	{
		while(str && str[count])
		{
			if(ft_isalpha(str[count]))
			{
				if(ft_islower(str[count]))
					repeat = str[count] - 'a' + 1;
				else if (ft_isupper(str[count]))
					repeat = str[count] - 'A' + 1;
				while(repeat > 0)
				{
					ft_putchar(str[count]);
					repeat--;
				}
			}
			else
				ft_putchar(str[count]);
			count++;
		}
	}
	ft_putchar('\n');
	return (0);
}
