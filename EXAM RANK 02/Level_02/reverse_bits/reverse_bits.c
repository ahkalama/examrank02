unsigned char	reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit = 0;

	while (i > 0)
	{
		bit = bit * 2 + (octet % 2);
		octet /= 2;
		i--;
	}
	return (bit);
}
