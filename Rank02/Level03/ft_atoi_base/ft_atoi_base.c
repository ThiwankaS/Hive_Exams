//#include <stdio.h>

int ft_isspace(int c)
{
	return (c == ' ' || c == '\t');
}

int ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}

int ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

char ft_tolower(int c)
{
	return ( c + 32);
}

int ft_isvalid(int c, int base)
{
	char *digits = "0123456789abcdef";
	int count = 0;
	while(digits[count] && count < base)
	{
		if(c == digits[count])
			return (1);
		count++;
	}
	return (0);
}

int ft_getvalue(int c)
{
	if(ft_isdigit(c))
		return (c - 48);
	else if( c == 'a')
		return (10);
	else if( c == 'b')
		return (11);
	else if( c == 'c')
		return (12);
	else if( c == 'd')
		return (13);
	else if( c == 'e')
		return (14);
	else if( c == 'f')
		return (15);
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int count = 0;
	int sign = 1;
	int result = 0;
	if(!str || str_base > 16 || str_base < 2)
		return (0);
	while(str && str[count] && ft_isspace(str[count]))
		count++;
	if(str[count] == '+' || str[count] == '-')
	{
		if(str[count] == '-')
			sign = sign * -1;
		count++;
	}
	while(str && str[count] && ft_isvalid(str[count], str_base))
	{
		if(ft_isupper(str[count]))
			result = result * str_base + ft_getvalue(ft_tolower(str[count]));
		else
			result = result * str_base + ft_getvalue(str[count]);
		count++;
	}
	if(str[count])
		return (0);
	return (result * sign);
}

// int main(void)
// {
	// printf(" result : %d\n", ft_atoi_base("    -1011", 2));
	// return (0);
// }
