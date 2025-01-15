// #include <stdio.h>
// #include <stdlib.h>

int	is_power_of_2(unsigned int n)
{
	if(n == 0)
		return (0);
	else if((n & (n -1)) == 0)
		return (1);
	else
		return (0);
}

// int main(int argc, char *argv[])
// {
// 	(void) argc;
// 	unsigned int nbr = (unsigned int)atoi(argv[1]);
// 	if(is_power_of_2(nbr))
// 		printf("%u is a power of two\n", nbr);
// 	else
// 		printf("%u is not a power of two\n", nbr);
// 	return (0);
// }
