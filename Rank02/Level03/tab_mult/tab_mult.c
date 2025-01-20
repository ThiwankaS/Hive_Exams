#include <unistd.h>

int ft_putchar(int c)
{
	return (write(1,&c,1));
}

void ft_putnbr(int nbr)
{
	if(nbr == -2147483648)
		write(1,"-2147483648",12);
	else if(nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nbr);
	}
	else if(nbr <= 9)
	{
		ft_putchar(nbr + '0');
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putchar((nbr % 10) + '0');
	}
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
	while(str && str[count] && ft_isspace(ft_isspace(str[count])))
		count++;
	if(str[count] == '+' || str[count] == '-')
	{
		if(str[count] == '-')
			sign = sign * -1;
		count++;
	}
	while(str && str[count])
	{
		result = result * 10 + (str[count] - '0');
		count++;
	}
	return (result * sign);
}

int main(int argc, char *argv[])
{
	if(argc == 2)
	{
		unsigned int nbr = (unsigned int)ft_atoi(argv[1]);
		int count = 1;
		unsigned int result = 1;
		if(nbr * 9 <= 2147483647)
		{
			while (count <= 9)
			{
				ft_putnbr(count);
				result = count * nbr;
				write(1," x ",3);
				ft_putnbr(nbr);
				write(1," = ",3);
				ft_putnbr(result);
				ft_putchar('\n');
				count++;
			}

		}
	}
	else
		ft_putchar('\n');
	return (0);
}
