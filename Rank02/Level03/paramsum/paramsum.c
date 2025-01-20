#include <unistd.h>

int	ft_putchar(int c)
{
	return (write(1,&c,1));
}


void	ft_putnbr(int nbr)
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
		ft_putnbr(nbr/10);
		ft_putchar((nbr % 10) + '0');
	}
}

int main(int argc, char *argv[])
{
	(void) argv;
	if(argc > 1)
	{
		ft_putnbr(argc - 1);
	}
	else
	{
		ft_putnbr(0);
	}
	ft_putchar('\n');
	return (0);
}
