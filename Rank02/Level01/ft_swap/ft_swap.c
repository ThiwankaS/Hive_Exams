//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// int main(void)
// {
	// int a = 10;
	// int b = 20;
	// printf("before swap | a = %d and b = %d \n", a, b);
	// ft_swap(&a,&b);
	// printf("after swap | a = %d and b = %d \n", a, b);
	// return (0);
// }
