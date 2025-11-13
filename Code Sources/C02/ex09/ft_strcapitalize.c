  char *ft_strcapitalize(char *str)
  {
    while(*str)
    {
      if(*str >= 'A' && *str <= 'Z')
      {
        *str += 32;
      }
      if((*str == 0) || ((*str >= 32 && *str <= 40) || (*str >= 91 && *str <= 96) || (*str >= 123 && *str <= 126)) || (*str >= 'a' && *str <= 'z'))
      {
        *str -= 32;
      }
      str++;
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
