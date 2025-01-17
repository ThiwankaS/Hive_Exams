#include <unistd.h>

int main(int argc, char *argv[])
{
	int count = 0;
	if(argc == 2)
	{
		while(argv[1] && argv[1][count])
		{
			if(argv[1][count] == '_')
			{
				count++;
				argv[1][count] = argv[1][count] - 32;
			}
			write(1,&argv[1][count],1);
			count++;
		}
	}
	write(1,"\n",1);
	return (0);
}
