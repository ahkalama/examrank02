#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	
	if (argc == 2)
	{
		while (argv[1][i]!='\0')
		{
			if (argv[1][i] >= 97 && argv[1][i] <= 122) 
			{
				for (int k = 0; k< argv[1][i]-96; k++)
					write (1, &argv[1][i] , 1);
			}
			else if (argv[1][i] >=65 && argv[1][i] <= 90 )
			{
				for (int j = 0; j< argv[1][i] - 64; j++)
					write (1, &argv[1][i] , 1);
			}
			else 
				write (1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

/*
Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
*/