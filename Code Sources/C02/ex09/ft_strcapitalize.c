char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if ((i == 0 || (str[i - 1] >= 32 && str[i - 1] <= 47)
				|| (str[i - 1] >= 58 && str[i - 1] <= 64)
				|| (str[i - 1] >= 91 && str[i - 1] <= 96)
				|| (str[i - 1] >= 123 && str[i - 1] <= 126))
			&& (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

  #include <stdio.h>

  int main()
  {
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    ft_strcapitalize(str);

    printf("%s", str);
}
