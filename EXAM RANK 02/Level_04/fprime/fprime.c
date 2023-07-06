#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int i = 2;
    if(ac == 2)
    {
        int num = atoi(av[1]);
        if(num == 1)
            return 1;
        while(num >= i)
        {
            if(num % i == 0)
            {
                printf("%d", i);
                if(i != num)
                printf("*");
            num /= i;
            i = 2;
            }
            i++;
        }
    }
    printf("\n");
}
