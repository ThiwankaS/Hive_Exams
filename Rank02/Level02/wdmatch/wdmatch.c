#include <unistd.h>

int ft_strlen(char *str)
{
	int count = 0;
	while(str && str[count])
		count++;
	return (count);
}

int ft_putchar(int c)
{
	return (write(1,&c,1));
}

int ft_putstr(char *str)
{
	int len = ft_strlen(str);
	return(write(1,str,len));
}

int main(int argc, char *argv[])
{
	int count = 0;
	int step = 0;

	char *s1 = argv[1];
	char *s2 = argv[2];
	if(argc == 3)
	{
		while(s1 && s1[count] && s2 && s2[step])
		{
			if(s1[count] == s2[step])
				count++;
			step++;
		}
		if(!s1[count])
		{
			ft_putstr(s1);
		}
	}
	ft_putchar('\n');
	return (0);
}
