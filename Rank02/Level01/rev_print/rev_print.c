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

char *rev_print(char *str)
{
	int len = ft_strlen(str);
	int count = len - 1;
	while(count >= 0)
	{
		ft_putchar(str[count]);
		count--;
	}
	return (str);
}

// int main(void)
// {
	// rev_print("Hello world");
	// write (1, "\n", 1);
	// rev_print("tnirp esreveR");
	// write (1, "\n", 1);
	// rev_print("");
	// write (1, "\n", 1);
// }
