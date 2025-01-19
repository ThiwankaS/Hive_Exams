#include <unistd.h>

int ft_putchar(int c)
{
	return (write(1,&c,1));
}

int ft_isspace(int c)
{
	return (c == ' ' || c == '\t');
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
	int end = 0;
	char *str = argv[1];
	int flag = 0;
	if(argc == 2)
	{
		count = ft_strlen(str) - 1;
		while(str && str[count] && ft_isspace(str[count]))
			count--;
		end = count + 1;
		count = 0;
		while(str && str[count] && ft_isspace(str[count]))
			count++;
		while (str && str[count] && count < end)
		{
			if(!ft_isspace(str[count]) && !ft_isspace(str[count + 1]))
			{
				flag = 0;
				ft_putchar(str[count]);
			}
			else if(!ft_isspace(str[count]) && ft_isspace(str[count + 1]))
			{
				flag = 1;
				ft_putchar(str[count]);
			}
			else if(ft_isspace(str[count]) && !ft_isspace(str[count + 1]))
			{
				flag = 1;
				ft_putchar(str[count]);
			}
			else if(ft_isspace(str[count]) && ft_isspace(str[count + 1]) && !flag)
			{
				flag = 1;
				ft_putchar(str[count]);
			}
			count++;
		}
	}
	ft_putchar('\n');
	return (0);
}

