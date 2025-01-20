#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc == 3)
	{
		unsigned int a = (unsigned int) atoi(argv[1]);
		unsigned int b = (unsigned int) atoi(argv[2]);
		unsigned int temp;
		while (b != 0)
		{
			temp = b;
			b = a % b;
			a = temp;
		}
		printf("%u",a);

	}
	printf("\n");
	return (0);
}
