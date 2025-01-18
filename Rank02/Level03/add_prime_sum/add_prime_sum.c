#include <unistd.h>
#include <stdio.h>

int ft_putchar(int c)
{
	return(write(1,&c,1));
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
	else if( nbr <= 9)
		ft_putchar(nbr + '0');
	else
	{
		ft_putnbr(nbr/10);
		ft_putnbr(nbr%10);
	}
}

int ft_isprime(int nbr)
{
	if(nbr == 0 || nbr == 1)
		return (0);
	if(nbr == 2 || nbr == 3)
		return (1);
	int step = 2;
	while(step <= nbr/2)
	{
		if(nbr % step == 0)
			return (0);
		step++;
	}
	return (1);
}

int ft_isspace(int c)
{
	return (c == ' ' || c == '\t');
}

int ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
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
	while(str && str[count] && ft_isdigit(str[count]))
	{
		result = result * 10 + (str[count] - '0');
		count++;
	}
	if(str[count])
		return (0);
	return (result * sign);
}

int main(int argc, char *argv[])
{
	int sum = 0;
	int nbr = ft_atoi(argv[1]);
	int count = 0;
	if(argc == 2)
	{
		if(nbr >= 2)
		{
			while(count <= nbr)
			{
				if(ft_isprime(count))
					sum = sum + count;
				count++;
			}
		}
	}
	ft_putnbr(sum);
	ft_putchar('\n');
	return (0);
}
