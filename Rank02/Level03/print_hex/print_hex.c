#include <unistd.h>

int ft_putchar(int c)
{
	return (write(1,&c,1));
}

int ft_isspace(int c)
{
	return (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v');
}

int ft_atoi(char *str)
{
	int count = 0;
	int sign = 1;
	int result = 0;
	while(str && str[count] && ft_isspace(str[count]))
		count++;
	if(str[count] == '+' || str[count] == '-')
	{
		if(str[count] == '-')
			sign = sign * -1;
		count++;
	}
	while(str && str[count])
	{
		result = result * 10 + (str[count] - 48);
		count++;
	}
	return (result * sign);
}

void ft_print_digit(int c)
{
	if(c >= 0 && c <= 9)
		ft_putchar(c + '0');
	else if( c == 10)
		ft_putchar('a');
	else if( c == 11)
		ft_putchar('b');
	else if( c == 12)
		ft_putchar('c');
	else if( c == 13)
		ft_putchar('d');
	else if( c == 14)
		ft_putchar('e');
	else
		ft_putchar('f');
}

void ft_dec_to_hex(int nbr)
{
	if(nbr == 0)
		return ;
	else
	{
		ft_dec_to_hex(nbr / 16);
		ft_print_digit(nbr % 16);
	}
}

int main(int argc, char *argv[])
{
	if(argc == 2)
	{
		ft_dec_to_hex(ft_atoi(argv[1]));
	}
	ft_putchar('\n');
	return(0);
}
