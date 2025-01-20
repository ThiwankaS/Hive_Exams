#include <unistd.h>

int ft_putchar(int c)
{
	return (write(1,&c,1));
}

int ft_isspace(int c)
{
	return (c == ' ' || c == '\t');
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

int main (int argc, char *argv[])
{
	if(argc > 1)
	{
		char *str;
		int count;
		int step = 1;
		int flag = 1;
		while(argv && argv[step])
		{
			str = argv[step];
			count = 0;
			flag = 1;
			if(argc > 2)
				ft_putchar('\n');
			while(str && str[count])
			{
				if(ft_isspace(str[count]))
					flag = 1;
				if(ft_isalpha(str[count]))
				{
					if(ft_islower(str[count]) && flag)
						str[count] = str[count] - 32;
					else if(ft_isupper(str[count]) && !flag)
						str[count] = str[count] + 32;
					flag = 0;
				}
				ft_putchar(str[count]);
				count++;
			}
			step++;
		}
	}
	ft_putchar('\n');
	return (0);
}
