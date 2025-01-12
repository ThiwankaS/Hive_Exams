#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc == 4)
	{
		int a = atoi(argv[1]);
		char *op = argv[2];
		int b = atoi(argv[3]);
		int result;

		if(op[0] == '+')
			result = (int)(a + b);
		else if(op[0] == '-')
			result = (int)(a - b);
		else if(op[0] == '*')
			result = (int) (a * b);
		else if(op[0] == '/')
			result = (int) (a / b);
		else if(op[0] == '%')
			result = (int) (a % b);
		printf("%d", result);
	}
	printf("\n");
	return (0);
}
