#include <unistd.h>

int main(int argc, char *argv[])
{
	char *s1 = argv[1];
	char *s2 = argv[2];
	int count = 0;
	int step = 0;
	if(argc == 3)
	{
		while(s1 && s1[count] && s2 && s2[step])
		{
			if(s1[count] == s2[step])
				count++;
			step++;
		}
		if(!s1[count])
			write(1,"1",1);
		else
			write(1,"0",1);
	}
	write(1,"\n",1);
	return (0);
}
