// #include <unistd.h>

// void print_bits(unsigned char octet)
// {
// 	int i = 8;
// 	unsigned char 	bit;

// 	while (i--)
// 	{
// 		bit = (octet >> i & 1) + '0';
// 		write(1, &bit, 1);
// 	}
// }
unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char result = 0x0;
	int count = 0;
	while(count < 8)
	{
		result = result << 1;
		result = result | (octet & 1);
		octet = octet >> 1;
		count++;
	}
	return (result);
}

// int main(void)
// {
// 	unsigned char ch = 0x02;
// 	write(1,"Before : ",10);
// 	print_bits(ch);
// 	write(1,"\n",1);
// 	write(1,"After  : ",10);
// 	print_bits(reverse_bits(ch));
// 	write(1,"\n",1);

// 	return (0);
// }
