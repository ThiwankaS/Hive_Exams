//#include <stdio.h>

int	ft_atoi(const char *str)
{
	int count = 0;
	int sign = 1;
	long result = 0;
	while(str && str[count] && ((str[count] >= 9 && str[count] <= 13) || str[count] == ' '))
		count++;
	if(str && str[count] && (str[count] == '-' || str[count] == '+'))
	{
		if(str[count] == '-')
			sign = sign * -1;
		count++;
	}
	while(str && str[count])
	{
		result = (result * 10) + (str[count] - '0');
		count++;
	}
	return ((int)result * sign);
}

// int main(int argc, char *argv[])
// {
// 	(void) argc;
// 	printf("%d\n", ft_atoi(argv[1]));
// 	return (0);
// }
