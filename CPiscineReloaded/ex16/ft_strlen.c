#include <stdio.h>

int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (*str != '\0')
	{
		lenght++;
		*str++;
	}
	return (lenght);
}

void	main(void)
{
	char	*frase;

	frase = "Esto es una cadena de no se cuantos caracteres";
	printf("%d", ft_strlen(frase));
}
