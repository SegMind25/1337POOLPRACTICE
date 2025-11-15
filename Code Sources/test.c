char *ft_strcapitalize(char *str)
{
  char *ptr = str;
  while(*ptr)
      {
    if(*ptr >= 'A' && *ptr <= 'Z')
      {
        *ptr += 32;
      }
    if((ptr == str ||
    (*(ptr - 1) >= 32 && *(ptr - 1) <= 47) ||
    (*(ptr - 1) >= 58 && *(ptr - 1) <= 64) ||
    (*(ptr - 1) >= 91 && *(ptr - 1) <= 96) ||
    (*(ptr - 1) >= 123 && *(ptr - 1) <= 126)) &&
    (*ptr >= 'a' && *ptr <= 'z'))
       {
          *ptr -= 32;
       }
          ptr++;
      }
    return str;
  }
#include <stdio.h>

int main()
{
  char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

  ft_strcapitalize(str);

  printf("%s", str);
}
