#include <unistd.h>

int ft_putchar(int c)
{
	return (write(1,&c,1));
}

int main(int argc, char *argv[])
{
	int count = 0;
	int step = 0;
	char *s1 = argv[1];
	char *s2 = argv[2];
	unsigned char seen[256] = {0};

	if(argc == 3)
	{
		while(s1 && s1[count])
		{
			step = count;
			while(s2 && s2[step])
			{
				if(s1[count] == s2[step])
				{
					if(!seen[(unsigned char)s1[count]])
					{
						ft_putchar(s1[count]);
						seen[(unsigned char)s1[count]] = 1;
					}
				}
				step++;
			}
			count++;
		}
	}
	ft_putchar('\n');
	return (0);
}
