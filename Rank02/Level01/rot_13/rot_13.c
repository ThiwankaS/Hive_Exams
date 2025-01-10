#include <unistd.h>

int ft_putchar(int c)
{
	return (write(1,&c,1));
}

int ft_islower(int c)
{
	return (c >= 'a' && c <= 'z' );
}

int ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}

int main (int argc, char *argv[])
{
	int count = 0;
	char *str = argv[1];
	if(argc == 2)
	{
		while(str && str[count])
		{
			if(ft_isalpha(str[count]))
			{
				if((str[count] >= 'a' && str[count] <= 'm') || (str[count] >= 'A' && str[count] <= 'M'))
					str[count] = str[count] + 13;
				else
					str[count] = str[count] - 13;
			}
			ft_putchar(str[count]);
			count++;
		}
	}
	ft_putchar('\n');
	return (0);
}
