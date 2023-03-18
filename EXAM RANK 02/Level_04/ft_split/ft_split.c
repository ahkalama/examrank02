#include <stdlib.h>

char **ft_split(char *str)
{
  char **tab;
  int index = 0;
  int a = 0;
  int b = 0;
  tab = (char **)malloc(sizeof(char *) * 1000);
  while(str[index] == ' ' || str[index] == '\t' || str[index] == '\n')
    index++;
  while(str[index])
  {
    if(str[index] > 32)
    {
      tab[a] = (char *)malloc(sizeof(char) * 1000);
      b = 0;
      while(str[index] > 32)
      {
        tab[a][b] = str[index];
        index++;
        b++;
      }
      tab[a][b] = '\0';
      a++;
    }
    else
    index++;
  }
  return tab;
}
// #include <stdio.h>
// int main()
// {
//     char str[] = "ahmet   mert  kalaman";
//     char **p = ft_split(str);
//     printf("%s\n",p[0]);
//     printf("%s\n",p[1]);
//     printf("%s\n",p[2]);
// }
