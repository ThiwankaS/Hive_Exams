//#include <stdio.h>
#include <stdlib.h>

// void printarr(int *arr, int size)
// {
	// int count = 0;
	// while(count < size)
	// {
		// printf("%d,", arr[count]);
		// count++;
	// }
// }

int	*ft_range(int start, int end)
{
	int size;
	if(end > start)
		size = end - start + 1;
	else
		size = start - end + 1;
	int count = 0;
	int *arr = malloc(size * sizeof(int));
	if(!arr)
		return (NULL);
	while(count < size)
	{
		if(end > start)
			arr[count] = start + count;
		else
			arr[count] = start - count;
		count++;
	}
	return (arr);
}

// int main(int argc, char *argv[])
// {
	// (void) argc;
	// int start = atoi(argv[1]);
	// int end = atoi(argv[2]);
	// int *arr = ft_range(start,end);
	// int size;
	// if(end > start)
		// size = end - start + 1;
	// else
		// size = start - end + 1;
	// printarr(arr, size);
	// printf("\n");
// }
