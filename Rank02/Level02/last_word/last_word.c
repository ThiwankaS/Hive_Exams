#include <unistd.h>

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

int ft_isspace(int c)
{
	return (c == '\t' || c == ' ');
}

int main(int argc, char *argv[])
{
	if(argc == 2)
	{
		char *str = argv[1];
		int len = ft_strlen(str);
		int count = len - 1;
		while(str && count >=0 && ft_isspace(str[count]))
			count--;
		while(str && count >= 0)
		{
			if(ft_isspace(str[count - 1]) || count - 1 == 0)
				break;
			count--;
		}
		while(str && str[count] && !ft_isspace(str[count]))
		{
			ft_putchar(str[count]);
			count++;
		}
	}
	ft_putchar('\n');
	return (0);
}

