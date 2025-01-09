#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count = 0;
	while(str && str[count])
		count++;
	return (count);
}
void	ft_putstr(char *str)
{
	int len = ft_strlen(str);
	write(1,str,len);
}

// int main(void)
// {
// 	ft_putstr("Hello World!\n");
// 	return (0);
// }
