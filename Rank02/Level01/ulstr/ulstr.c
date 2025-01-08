#include <unistd.h>

int ft_islower(int c)
{
	return ((c >= 'a' && c <= 'z'));
}

int ft_isupper(int c)
{
	return ((c >= 'A' && c <= 'Z'));
}

int ft_isalpha(int c)
{
	return ( ft_islower(c)|| ft_isupper(c));
}

int main(int argc, char *argv[])
{
	if(argc == 2)
	{
		int count = 0;
		while(argv[1] && argv[1][count])
		{
			if(ft_isalpha(argv[1][count]))
			{
				if(ft_islower(argv[1][count]))
					argv[1][count] = argv[1][count] - 32;
				else if(ft_isupper(argv[1][count]))
					argv[1][count] = argv[1][count] + 32;
			}
			write(1,&argv[1][count],1);
			count++;
		}
	}
	write(1,"\n",1);
	return (0);
}


