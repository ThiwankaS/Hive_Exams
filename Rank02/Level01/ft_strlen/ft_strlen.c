// #include <stdio.h>

int	ft_strlen(char *str)
{
	int count = 0;
	while(str && str[count])
		count++;
	return (count);
}

// int main(int argc, char *argv[])
// {
// 	if(argc == 2)
// 	{
// 		printf("len : %d\n", ft_strlen(argv[1]));
// 	}
// 	return(0);
// }
