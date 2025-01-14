#include <unistd.h>

int ft_putchar(int c)
{
	return (write(1,&c,1));
}

int main(int argc, char *argv[])
{
	unsigned char seen[256] = {0};
	char *s = argv[2];

	if(argc == 3)
	{
		while(*argv[1])
		{
			argv[2] = s;
			while(*argv[2])
			{
				if(*argv[1] == *argv[2])
				{
					if(!seen[(unsigned char)*argv[1]])
					{
						ft_putchar(*argv[1]);
						seen[(unsigned char)*argv[1]] = 1;
					}
				}
				argv[2]++;
			}
			argv[1]++;
		}
	}
	ft_putchar('\n');
	return (0);
}
