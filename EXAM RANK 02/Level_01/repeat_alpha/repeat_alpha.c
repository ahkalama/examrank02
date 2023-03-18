#include <unistd.h>

void    ft_putchar_n(char c, int i)
{
    while (i > 0)
    {
        write(1, &c, 1);
        --i;
    }
}


void repeat_alpha(char *s)
{
	while (*s != '\0')
	{
	   if(*s >= 'a' && *s <= 'z')
	    	ft_putchar_n(*s, *s + 1 - 'a');
	   else if(*s >= 'A' && *s <= 'Z')
	    	ft_putchar_n(*s, *s + 1 - 'A');
		else
		  	write(1, &s, 1);
		s++;
	}
		


}
int main(int argc, char **argv)
{
	
	if(argc == 2)
	  repeat_alpha(argv[1]);

	  write(1, "\n", 1);

	return(0);
}