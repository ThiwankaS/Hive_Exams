//#include <stdio.h>

int	max(int* tab, unsigned int len)
{
	if(len <= 0 || !tab)
		return (0);
	unsigned int count = 0;
	int max = 0;
	while(count < len)
	{
		if(max < tab[count])
			max = tab[count];
		count++;
	}
	return (max);
}

// int main(void)
// {
// 	int arr[5] = {10, 12, -5 , -120 , 11};
// 	printf("maximum : %d\n", max(arr, 5));
// 	return (0);
// }
