#include <unistd.h>

int ft_putchar(int c)
{
	return (write(1,&c,1));
}

int ft_putnbr(int nbr)
{
	if(nbr == -2147483647)
		write(1,"-2147483647",12);
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
		ft_putchar(nbr%10 + '0');
	}

}

int main(void)
{
	int count = 1;
	while (count <= 100)
	{
		if((count % 3 == 0) && (count % 5 == 0))
			write(1,"fizzbuzz",8);
		else if(count % 3 == 0)
			write(1,"fizz",4);
		else if(count % 5 == 0)
			write(1,"buzz",4);
		else
			ft_putnbr(count);
		ft_putchar('\n');
		count++;
	}

	return (0);
}
