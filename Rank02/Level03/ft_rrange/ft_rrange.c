#include <stdlib.h>
//#include <stdio.h>

// void printarr(int *arr, int size)
// {
	// int count = 0;
	// while(count < size)
	// {
		// printf("%d,",arr[count]);
		// count++;
	// }
// }

int	*ft_rrange(int start, int end)
{
	int size;
	int count = 0;
	if(end > start)
		size = end - start + 1;
	else
		size = start - end + 1;
	int *arr = malloc(size * sizeof(int));
	while(count < size)
	{
		if(end > start)
			arr[count] = end - count;
		else
			arr[count] = end + count;
		count++;
	}
	return (arr);
}

// int main(int argc, char *argv[])
// {
	// (void) argc;
	// int start = atoi(argv[1]);
	// int end = atoi(argv[2]);
	// int size;
	// if(end > start)
		// size = end - start + 1;
	// else
		// size = start - end + 1;
	// int *arr = ft_rrange(start, end);
	// printarr(arr, size);
	// printf("\n");
	// return (0);
// }
