#include <unistd.h>

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
			if((str[count] >= 'a' && str[count] <= 'y') || (str[count] >= 'A' && str[count] <= 'Y'))
				str[count] = str[count] + 1;
			else if(str[count] == 'z' || str[count] == 'Z')
				str[count] = str[count] - 25;
			write(1,&str[count],1);
			count++;
		}
	}
	write(1,"\n",1);
	return (0);
}
