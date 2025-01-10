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

int main(int argc, char *argv[])
{
	char *string = argv[1];
	char *search = argv[2];
	char *replace = argv[3];
	int count = 0;
	int step = 0;
	if(argc == 4 && ft_strlen(search) == 1 && ft_strlen(replace) == 1)
	{
		while(string && string[count])
		{
			if(string[count] == search[step])
			{
				string[count] = replace[step];
			}
			ft_putchar(string[count]);
			count++;
		}
	}
	ft_putchar('\n');
	return (0);
}
