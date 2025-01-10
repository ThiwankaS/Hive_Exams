#include <unistd.h>

int ft_putchar(int c)
{
	return (write(1,&c,1));
}

int main(int argc, char *argv[])
{
	int count = 0;
	char *str1 = argv[1];
	char *str2 = argv[2];
	unsigned char seen[256] = {0};
	if(argc == 3)
	{
		while(str1 && str1[count])
		{
			if(!seen[(unsigned char)str1[count]])
			{
				ft_putchar(str1[count]);
				seen[(unsigned char)str1[count]] = 1;
			}
			count++;
		}
		count = 0;
		while(str2 && str2[count])
		{
			if(!seen[(unsigned char)str2[count]])
			{
				ft_putchar(str2[count]);
				seen[(unsigned char)str2[count]] = 1;
			}
			count++;
		}
	}
	ft_putchar('\n');
	return (0);
}
