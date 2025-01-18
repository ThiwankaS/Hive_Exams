#include <unistd.h>

int ft_putchar(int c)
{
	return (write(1,&c,1));
}

int ft_isspace(int c)
{
	return (c == ' ' || c == '\t');
}

int ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int ft_islower(int c)
{
	return( c >= 'a' && c <= 'z');
}

int ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}

int main(int argc, char *argv[])
{
	if(argc > 1)
	{
		char *str;
		int count;
		int step = 1;
		while(argv[step])
		{
			str = argv[step];
			count = 0;
			if(step > 1)
				ft_putchar('\n');
			while(str && str[count])
			{
				if(ft_isalpha(str[count]))
				{
					if(ft_isupper(str[count]))
						str[count] = str[count] + 32;
					if(ft_isspace(str[count + 1]) || (str[count + 1] == '\0'))
					{
						if(!ft_isupper(str[count]))
							str[count] = str[count] - 32;
					}
					ft_putchar(str[count]);
				}
				else
				{
					ft_putchar(str[count]);
				}
				count++;
			}
			step++;
		}
	}
	ft_putchar('\n');
	return (0);
}
