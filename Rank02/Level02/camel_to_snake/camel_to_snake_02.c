#include <unistd.h>

int main(int argc, char *argv[])
{
	(void) argc;
	int count = 0;
	while(argv[1] && argv[1][count])
	{
		if(argv[1][count] >= 'A' && argv[1][count] <= 'Z')
		{
			argv[1][count] = argv[1][count] + 32;
			write(1,"_",1);
		}
		write(1,&argv[1][count],1);
		count++;
	}
	write(1,"\n",1);
	return (0);
}
