// #include <stdio.h>
// #include <stdlib.h>

unsigned int	hcm(unsigned int a, unsigned int b)
{
	unsigned int temp;
	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return (a);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	return ((a * b)/ hcm(a,b));
}

// int main(int argc, char *argv[])
// {
// 	(void) argc;
// 	unsigned int a = (unsigned int)atoi(argv[1]);
// 	unsigned int b = (unsigned int)atoi(argv[2]);
// 	printf("LCM (%u, %u) : %u\n", a,b,lcm(a,b));
// 	return (0);
// }
