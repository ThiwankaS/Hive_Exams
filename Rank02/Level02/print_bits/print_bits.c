#include <unistd.h>

void print_bits(unsigned char octet)
{
	int count = 0;
	unsigned char mask = 0x80;
	while (count < 8)
	{
		write(1,((octet & mask) ? "1" : "0"),1);
		count++;
		mask = mask >> 1;
	}
}

int main(void)
{
	print_bits(2);
	write(1,"\n",1);
	return (0);
}
